#include<iostream>
using namespace std;
int main()
{
    string name;
    double units, cost;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter units : ";
    cin>>units;
    if(units<=100)
        cost = 0.60*units;
    else if(units>100 && units<=200)
        cost = 60 + ((units-100)*0.80);
    else if(units>200)
    {
        cost = 60 + 80 + ((units-200)*0.90);
        if(cost>300)
        {
            cost = cost + 50 + ((15*(cost+50))/100);
        }
    }
    cout<<"Name : "<<name<<endl;
    cout<<"Cost : "<<cost<<endl;
    return 0;
}
