#include<iostream>
using namespace std;

class A
{
	int r,img;
	public:
		A(int real, int imag)
        {
			r = real;
			img = imag;
		}
		void operator + (A obj)
        {
			cout<<endl<<"Sum of the given complex numbers: ("<<r+obj.r<<")+("<<img+obj.img<<")i";
		}
		void operator - ()
        {
			r*=(-1);
			img*=(-1);
			cout<<" ("<<r<<")+("<<img<<")i"<<endl;
		}
};

int main()
{
	int r1,i1,r2,i2;
	cout<<endl<<"Enter real and imaginary for complex no 1: ";
	cin>>r1>>i1;
	A obj1(r1,i1);
	cout<<endl<<"Enter real and imaginary for complex no 2: ";
	cin>>r2>>i2;
	A obj2(r2,i2);
	obj1 + obj2;
	cout<<endl<<"Negating the Complex Numbers"<<endl;
	-obj1;
	-obj2;
	return 0;
}
