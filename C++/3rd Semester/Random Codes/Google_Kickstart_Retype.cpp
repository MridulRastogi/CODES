#include<iostream>
using namespace std;
int main()
{
    long long int t,n,k,s,z,out,cond1,cond2;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        cin>>n>>k>>s;
        cond1 = (k-1) + 1 + n;
        cond2 = (k-1) + (k-s) + (n-(s-1));
        out = cond1<cond2 ? cond1 : cond2;
        cout<<"Case #"<<z<<": "<<out<<endl;
    }
    return 0;
}
