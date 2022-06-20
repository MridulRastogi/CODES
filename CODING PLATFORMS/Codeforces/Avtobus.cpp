#include<bits/stdc++.h>
using namespace std;
typedef long long int  lli;

lli noOfMaximumBuses(lli n)
{
    if(n%2==1)
        return -1;
    else if(n%4==0)
        return (n/4);
    else if(n%4==2 and n>4)
        return (((n/4)-1)+1);
}

lli noOfMinimumBuses(lli n)
{
    if(n%2==1)
        return -1;
    else if(n%6==0)
        return n/6;
    else
        return (((n%6)/4) + (n/6));
}

int main()
{
    long long int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        lli mini = noOfMinimumBuses(n);
        lli maxi = noOfMaximumBuses(n);
        if(mini==-1 || maxi==-1)
            cout << "-1" << endl;
        else
            cout << mini << " " << maxi << endl;
    }
    return 0;
}
