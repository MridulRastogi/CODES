#include<iostream>
using namespace std;
int main()
{
    int t,i;
    double n,res;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        res = (n/2.0)+0.5;
        cout<<"Case #"<<i<<": "<<res<<endl;
    }
    return 0;
}
