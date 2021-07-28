#include<iostream>
using namespace std;
int main()
{
    int t,i,c,z,n,max;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        c=2;
        for(i=0;i<n-2;i++)
        {
            if(abs(a[i]-a[i+1]) == abs(a[i+1]-a[i+2]))
                c++;
            else
            {
                max = c;
                c=2;
            }
        }
        max = max==n ? max : (max+2);
        cout<<"Case #"<<z<<": "<<max<<endl;
    }
    return 0;
}
