#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,x1,x2,x;
    cout<<"Enter the three coefficients : "<<endl;
    cout<<"A : ";
    cin>>a;
    cout<<"B : ";
    cin>>b;
    cout<<"C : ";
    cin>>c;
    d = (b*b)-(4*a*c);
    if(d<0)
        cout<<endl<<"No Real Roots."<<endl;
    else if(d==0)
    {
        x = (-b)/(2*a);
        cout<<endl<<"There is only 1 real root : "<<x<<endl;
    }
    else if(d>0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout<<endl<<"There are 2 real roots : "<<x1<<" and "<<x2<<endl;
    }
    return 0;
}
