//* It is a member function that is used to initialize an object using another object.
//Another Object = existing Object of the same class.
//Both the objects belong to the same class.
/* Copy Constructor is also invoked by the compiler implicitly.
In C++ there are two types of Default Constructor : 1) Default Constructor 2) Default Copy Constructor
*/
#include<iostream>
using namespace std;
class cop
{
    int a,b;
    public:
    cop(int x, int y)
    {
        a=x;
        b=y;
        cout<<"Values Assigned"<<endl;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    cop(cop &c)     //explicit copy constructor
    {
        a = c.a;
        b = c.b;
    }
};
int main()
{
    cop co(100,300);
    cop c1 = co;    //copy constructor has been implicitly invoked by the compiler
    //cop c1(co);
    co.display();   //parametrized constructor
    c1.display();   //copy constructor is called and values are displayed with the help of it
    return 0;
}
