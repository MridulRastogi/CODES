#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    int rem1, rem2, rem3;
    int quo1, quo2, quo3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int max=0, max1=0, max2=0, max3=0;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            rem3 = a[i];
            rem2 = a[i];
            rem1 = a[i];

            quo3 = rem3 / 3;    //quotient
            rem3 = rem3 % 3;    //remainder
            if(quo3>max3)
                max3 = quo3;

            quo2 = rem3 / 2;    //quotient
            rem2 = rem3 % 2;    //remainder
            if(quo2>max2)
                max2 = quo2;

            quo1 = rem2 / 1;    //quotient
            rem1 = rem2 % 1;    //remainder
            if(quo1>max1)
                max1 = quo1;

            max = max < (max1+max2+max3) ? (max1+max2+max3) : max ;
        }
        cout<<max<<endl<<endl;
    }
    return 0;
}

// 002 + 0 + 1  => 7
// 025 + 2 + 0  => 77
// 259 + 0 + 0  => 777

// 259 + 2 + 1 = 262

/*
4
1
1337
3
10 8 10
5
1 2 3 4 5
3
7 77 777
*/
