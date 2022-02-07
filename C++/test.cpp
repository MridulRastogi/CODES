#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    float a,b,x;
    int i,j,k;
    float res, min=100000000;
    for(i=1; i<1000; i++)
    {
        for(j=1; j<1000; j++)
        {
            for(k=1; k<1000; k++)
            {
                res = ((float)i*j) + ((float)k/j);
                if(res<min)
                {
                    min = res;
                    a = i;
                    b = k;
                    x = j;
                }
            }
        }
    }
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"x = "<<x<<endl<<"Min = "<<min<<endl;
    return 0;
}
