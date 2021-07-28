#include<iostream>
using namespace std;

class B;
class A
{
	int x;
	public:
		A(int a)
        {
			x=a;
		}
		void show()
        {
			cout<<" A :: a = "<<x<<endl;
		}
		friend void Swap(A obj1, B obj2);
};

class B
{
	int y;
	public:
		B(int b)
        {
			y=b;
		}
		void show()
        {
			cout<<" B :: b = "<<y<<endl;
		}
		friend void Swap(A obj1, B obj2);
};

void Swap(A obj1, B obj2)
{
	int temp;
	temp = obj1.x;
	obj1.x = obj2.y;
	obj2.y = temp;
	cout<<" A :: a = "<<obj1.x<<endl<<" B :: b = "<<obj2.y<<endl;
}

int main()
{
	int a,b;
	cout<<" Enter value of a for class A : ";
	cin>>a;
	A obj1(a);
	cout<<" Enter value of b for class B : ";
	cin>>b;
	B obj2(b);
	cout<<" Before Swapping!"<<endl;
	obj1.show();
	obj2.show();
	cout<<" After Swapping! "<<endl;
	Swap(obj1,obj2);
	return 0;
}
