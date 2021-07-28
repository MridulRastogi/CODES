#include<iostream>
using namespace std;
class Account
{
    int balance=50000;
    int amount, acc_no;
    string name;
    void setData()
    {
        cout<<"Enter the name : ";
        getline(cin,name);
        cout<<"Enter the account Number : ";
        cin>>acc_no;
        cout<<"Enter the Amount to be withdrawn : ";
        cin>>amount;
    }
    void calBal()
    {
        while(amount>0)
        {
            balance = balance - amount;
            cout<<"Remaining Balance : "<<balance<<endl;
            break;
        }
        if(amount<=0)
            cout<<"Amount can not be NEGATIVE!! Please enter a valid amount : "<<endl;
    }
    public:
        void Display(); //interface so that can be used by any user for accessing the data.
};
void Account::Display()
{
    setData();
    cout<<endl<<"Name : "<<name<<endl;
    calBal();
}
int main()
{
    Account at;
    at.Display();
    return 0;
}
