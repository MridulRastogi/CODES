#include<iostream>
using namespace std;
bool check(int a[],int n)
{
    bool flag = true;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    int t,i,n,x,d=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n],b[n],c=0;
        bool flag = false;
        for(i=0;i<n;i++)
            cin>>a[i];

        while(flag!=true)
        {
            for(i=0;i<n;i++)
            {
                if((a[i]%x==0 || a[i]<x) && a[i]>0)
                {
                    a[i] = a[i]-x;;
                    b[c] = i+1;
                    c++;
                }
                else
                    a[i] = a[i]-x;
            }
            flag = check(a,n);
        }
        cout<<"Case #"<<d<<": ";
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        d++;
    }
    return 0;
}
