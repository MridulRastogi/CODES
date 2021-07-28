#include<iostream>
using namespace std;

class A
{
 	public:
        int x;
 	    void GetX()
        {
            cout<<"Enter value of x : ";
            cin>>x;
        }
};

class B
{
 	public:
        int y;
 	    void GetY()
 	    {
            cout<<"Enter value of y : ";
            cin>>y;
 	    }
};

class C : public A, public B
{
 	public:
        void Sum()
        {
            cout<<"Sum of X & Y = "<<x+y<<endl;
 	    }
};

int main()
{
 	 C c;
 	 c.GetX();
 	 c.GetY();
 	 c.Sum();
 	 return 0;
}
