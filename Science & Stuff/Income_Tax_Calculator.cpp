#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        double salary, it=0;
        cout << "Input Salary : ";
        cin >> salary;
        if(salary<=250000)
            it += 0;
        if(salary > 250000)
            it += (salary<=500000  ? 0.05*(salary-250000) : 0.05*250000);
        if(salary > 500000)
            it += (salary<=750000  ? 0.10*(salary-500000) : 0.10*250000);
        if(salary > 750000)
            it += (salary<=1000000 ? 0.15*(salary-750000) : 0.15*250000);
        if(salary > 1000000)
            it += (salary<=1250000 ? 0.20*(salary-1000000): 0.20*250000);
        if(salary > 1250000)
            it += (salary<=1500000 ? 0.25*(salary-1250000): 0.25*250000);
        if(salary > 1500000)
            it += 0.30*(salary-1500000);
        cout << "NET INCOME TAX     : " << it << endl;
        cout << "SALARY IN HAND     : " << int(salary-it) << endl;
        cout << "  SALARY   / MONTH : " << salary/12 << endl;
        cout << "INCOME TAX / MONTH : " << it/12 << endl;
        cout << "   S-IT    / MONTH : " << (salary-it)/12 << endl << endl;
    }
    return 0;
}

/*
Income Tax Slab                 New Tax Regime Slab Rate FY 2021-22

Up to Rs.2,50,000               Exempt
Rs.2,50,001 – Rs.5,00,000       5%
Rs.5,00,001 – Rs.7,50,000       10%
Rs.7,50,001 – Rs.10,00,000      15%
Rs.10,00,001 – Rs.12,50,000     20%
Rs. 12,50,001 – Rs.15,00,000    25%
Above Rs. 15 lakh               30%
*/
