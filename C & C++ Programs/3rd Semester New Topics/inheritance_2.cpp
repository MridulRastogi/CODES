#include<iostream>
using namespace std;

class Base
{
    protected:
        int a=10;      //by default it becomes private
};
class Derived : public Base
{
    public:
        void SetDerived(int y)
        {
            a=y;
            cout<<"Value of a : "<<a<<endl;                //accessing the private data members of
        }
};

int main()
{
    Derived ob;
    ob.SetDerived(20);
    return 0;
}
