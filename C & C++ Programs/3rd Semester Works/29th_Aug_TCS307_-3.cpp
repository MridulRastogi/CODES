#include<iostream>
#include<cmath>
using namespace std;
class Calculator
{
    public:
    double a,b,res;
    Calculator()
    {
        a=0;
        b=0;
        res=0;
    }
    Calculator(double a,double b,int ch)
    {
        switch(ch)
        {
            case 1: res = a+b;
                    cout<<"Sum = "<<res<<endl;
            break;
            case 2: res = abs(a-b);
                    cout<<"Remainder : "<<res<<endl;
            break;
            case 3: res = a/b;
                    cout<<"Quotient : "<<res<<endl;
            break;
            case 4: res = a*b;
                    cout<<"Product : "<<res<<endl;
            break;
            case 5: res = pow(a,b);
                    cout<<a<<" to the power "<<b<<" is : "<<res<<endl;
            break;
            default: cout<<"Invalid Choice"<<endl;
            break;
        }
    }
};
int main()
{
    int ch;
    double a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"Enter choice : \n1. Addition \n2. Subtraction \n3. Division \n4. Multiplication \n5. Power"<<endl;
    cin>>ch;
    Calculator c(a,b,ch);
    return 0;
}
