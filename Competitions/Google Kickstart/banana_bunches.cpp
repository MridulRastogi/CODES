#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int includeElement(int a[], int n, int sum)
{
    int c=0;
    for(int i=n; i>=0; i--)
    {
        if((sum-a[i]) >= 0)
        {
            sum = sum-a[i];
            c++;
        }
    }
    if(sum==0)
        return c;
    else
        return -1;
}

int main()
{
    int t,i,z,n,k,s=0;
    cin>>t;
    for(z=1; z<=t; z++)
    {
        cin>>n>>k;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        //sort(a,a+n);
        cout<<"Case #"<<z<<": "<<includeElement(a,n,k)<<endl<<endl;
        /*map<int,int> m;
        for(i=0; i<n; i++)
            m[a[i]]++;
        auto pose = m.find(a[n-1]);
        auto posf = m.find(a[0]);
        for(auto it=pose; it>=posf; it--)
        {
            while(s<=k)
            {
                while((s+(it.first*it.second))<=k)
                    s = s + (it.first*it.second);
                it.second--;
            }
        }*/
    }
    return 0;
}
