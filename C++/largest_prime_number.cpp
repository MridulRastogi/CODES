#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    __int64 i,j,num,c=0,d=0;
    for(i=100000000000000; i<=1000000000000000; i++)
    {
        num = i;
        for(j=2; j<=num/2; j++)
            if(num%j==0)
                c++;
        if(c==0)
        {
            cout<<num<<", ";
            d++;
        }
        if(d>=10)
        {
            cout<<endl;
            d=0;
        }
        c=0;
    }
    return 0;
}
