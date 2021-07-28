/**
    Properties of Operator Overloading :
*   We can overload only existing operators.
*   Valid Operators in C can be overloaded in C++ also.
    Exceptions :
*   Scope Resolution Operator(::)
*   Conditional Operator or Ternary Operator(?)(:)
*   Member Access Operator (.*)
*   Dot Operators (.)
    Note
* We can't change the meaning of the operator in operator overloading.
Syntax : <name of class> <operator> <name of class  reference>
ex: Test operator (Test &)
*/
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex()
        {

        }
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        void show()
        {
            cout<<a<<"+i "<<b;
        }
        Complex operator +(Complex &c)
        {
            Complex temp;
            temp.a = a + c.a ;
            temp.b = b + c.b;
            return temp;
        }

};
int main()
{
    Complex  c1(100,200),c2(300,400),c3;
    c3 = c1.operator + (c2) ; //valid operation- we have overloaded the operator
    //c3 = c1 + c2;
    c3.show();
    return 0;
}
