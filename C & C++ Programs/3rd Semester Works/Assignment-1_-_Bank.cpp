#include<iostream>
using namespace std;
int main()
{
    double p,r,t,ma;
    int o;
    cout<<"1. Term Deposit"<<endl<<"2. Recurring Deposit"<<endl<<"Choose your option : ";
    cin>>o;
    switch(o)
    {
        case 1: cout<<"Enter Principal amount : ";
                cin>>p;
                cout<<"Enter Rate of Interest : ";
                cin>>r;
                cout<<"Enter Time Period : ";
                cin>>t;
                ma = p*t*((1+r)/100);
                cout<<"Maturity Amount : "<<ma;
        break;
        case 2: cout<<"Enter Monthly Installment : ";
                cin>>p;
                cout<<"Enter Rate of Interest : ";
                cin>>r;
                cout<<"Enter Time Period : ";
                cin>>t;
                ma = (p*t)+(p*t*((t+1)/2))*(r/100)*(1/12);
                cout<<"Maturity Amount : "<<ma;
        break;
        default: cout<<"Invalid Choice";
        break;
    }
    return 0;
}
