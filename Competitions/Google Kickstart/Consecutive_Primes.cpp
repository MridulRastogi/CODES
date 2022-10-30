#include<iostream>
using namespace std;
int check_prime(long n)
{
    long i;
    int c=0;
    for(i=2;i<=n/2;i++)
        if(n%i==0)
        {
            c=1;
            break;
        }
    return c;
}
int main()
{
    long t,z,n,i,num,c=0,p;
    long a[100009];

    for(i=0;i<100009;i++)
        if(check_prime(c++)==0)
        {
            a[i] = c-1;
            //cout<<a[i]<<endl;
        }
    cin>>t;
    for(z=1;z<=t;z++)
    {
        cin>>n;
        num=0;
        for(i=0;i<100008;i++)
        {
            p = a[i]*a[i+1];
            cout << a[i] << " " << a[i+1] << endl;
            if(p>n)
            {
                num = a[i]*a[i-1];
                cout<<"Case #"<<z<<": "<<num<<endl;
                break;
            }
        }

    }
    return 0;
}
