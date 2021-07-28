#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
        Test(int x,int y)
        {
            a=x;
            b=y;
        }
        friend int add(Test &);  //declaration
        void show()
        {
            cout<<"Sum is "<<(a+b);
        }
};
int add(Test &t)
{
    return(t.a+t.b);
}
int main()
{
    Test t1(100,200);
    add(t1);
    t1.show();
    return 0;
}
/**
    Properties of a friend function :
* It is a non member function.
* It must be declared inside a class to which it is a friend.
* Definition of a Friend Function must be written outside the class, without any friend keyword.
* It can be declared anywhere, either in public or in private section.
* There is no caller object in friend function.
* Objects are passed as an argument to friend function.
* There is no scope resolution operator used.
*/


