#include<iostream>
using namespace std;

class Base
{
    public:
        void in_base()
        {
            cout<<"This is a statement of base class."<<endl;
        }
};

class Derived : public Base
{
    public:
        void in_derived()
        {
            Base b;
            b.in_base();
        }
};

int main()
{
    Derived d;
    d.in_derived();
    return 0;
}
