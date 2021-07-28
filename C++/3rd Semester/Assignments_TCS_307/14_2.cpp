#include<iostream>
using namespace std;

class SavingsAccount
{
    private:
        double SavingsBalance;
    public:
        static double annualInterestRate;
        void CalulateMonthlyInterest()
        {
            double monthlyInterest = (SavingsBalance * annualInterestRate)/12;
            SavingsBalance += monthlyInterest;
        }
        void modifyInterestRate(double interest)
        {
            annualInterestRate = interest;
        }
};

int main()
{

    return 0;
}
