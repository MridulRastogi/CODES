#include<iostream>
using namespace std;
int main()
{
    int t,i,n,x,d=1,e=0;
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
            e=0;
            for(i=0;i<n;i++)
            {
                if(a[i]>x)
                    a[i] = a[i]-x;
                else if(a[i]<=x && a[i]>0)
                {
                    a[i] = a[i] - x;
                    b[c] = i + 1;
                    c++;
                }
                if(a[i]<1)
                    e++;
            }
            if(e==n)
                flag = true;
        }
        cout<<"Case #"<<d<<": ";
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        d++;
    }
    return 0;
}
