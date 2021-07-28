#include<iostream>
#include<string>
using namespace std;
class Employee
{
    public:
        int acc_no;
        string name;
        double t,ti;
    void InputInfo()
    {
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter Account Number : ";
        cin>>acc_no;
        cout<<"Enter Taxable Income : ";
        cin>>ti;
    }
    void TaxCalc()
    {
        if(ti<250000)
            t = 0;
        else if(ti>=250000 && ti<300000)
            t = (ti-250000)*0.1;
        else if(ti>=300000 && ti<400000)
            t = ((ti-300000)*0.2) + 5000;
        else if(ti>=400000)
            t = ((ti-400000)*0.3) + 25000;
    }
    void DisplayInfo()
    {
        cout<<endl<<"Name  : "<<name<<endl;
        cout<<"Account Number : "<<acc_no<<endl;
        cout<<"Taxable Income : "<<ti<<endl;
        cout<<"Tax : "<<t;
    }
};
int main()
{
    Employee e;
    e.InputInfo();
    e.TaxCalc();
    e.DisplayInfo();
    return 0;
}
