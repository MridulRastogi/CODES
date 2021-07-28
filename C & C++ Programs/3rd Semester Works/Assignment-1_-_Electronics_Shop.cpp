#include<iostream>
using namespace std;
int main()
{
    double p,na;
    string name,add;
    char ch;
    cout<<"Enter the type of purchase : "<<endl<<"1. Laptop"<<endl<<"2. Desktop PC"<<endl<<"Choice : ";
    cin>>ch;
    cin.ignore();
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your address : ";
    getline(cin,add);
    cout<<"Enter the amount of purchase : ";
    cin>>p;
    switch(ch)
    {
        case 'L':   if(p>=0 && p<=25000)
                        na = p;
                    else if(p>25000 && p>=57000)
                        na = 0.95*p;
                    else if(p>57000 && p<=100000)
                        na = 0.925*p;
                    else
                        na = 0.9*p;
        break;
        case 'D':   if(p>=0 && p>=25000)
                        na = 0.95*p;
                    else if(p>25000 && p<=57000)
                        na = 0.924*p;
                    else if(p>57000 && p<100000)
                        na  = 0.9*p;
                    else
                        na = 0.85*p;
        break;
        default:    cout<<"Invalid Choice";
        }
        cout<<endl<<"Name : "<<name<<endl<<"Address : "<<add<<endl<<"Net Amount : "<<na<<endl;
    return 0;
}
