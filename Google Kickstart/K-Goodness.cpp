#include<iostream>
using namespace std;
int main()
{
    int t,z,c,i,n,k,pos;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        c=0;
        cin>>n>>k;
        char a[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        if(n%2==0)
        {
            for(i=1;i<=n/2;i++)
            {
                pos = n-i+1;
                if( a[i] != a[pos] )
                    c++;
            }
            cout<<"Case #"<<z<<": "<<abs(k-c)<<endl;
        }
        else if(n%2==1)
        {
            for(i=1;i<=((n/2)+1);i++)
            {
                pos = n-i+1;
                if( a[i] != a[pos] )
                    c++;
            }
            cout<<"Case #"<<z<<": "<<abs(k-c)<<endl;
        }
    }
    return 0;
}
