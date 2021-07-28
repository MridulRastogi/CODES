#include<iostream>
#include<string>
using namespace std;
class SavingsAccount
{
    static int annualInterestRate = 4;
public:
    void calculateMonthlyInterest(int savingsBalance)
    {
        int monthlyInterest = (savingsBalance * annualInterestRate)/12;
        savingsBalance = savingsBalance + monthlyInterest;
        cout<<"Savings Balance : "<<savingsBalance<<endl;
    }
    static void modifyInterestRate(int savingsBalance)
    {
        annualInterestRate = 3.5;
    }

};
int main()
{
    SavingsAccount saver1,saver2;
    saver1.calculateMonthlyInterest(5000);
    saver1.modifyInterestRate();
    saver2.calculateMonthlyInterest(8000);
    saver2.modifyInterestRate();
    return 0;
}
