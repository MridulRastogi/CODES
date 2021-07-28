#include<iostream>
#include<cmath>
using namespace std;
string dec_to_bin(unsigned long long int n)
{
    unsigned long long int r;
    string s="";
    while(n>0)
    {
        r=n%2;
        s = s + to_string(r);
        n=n/2;
    }
    return s;
}
int main()
{
    string s;
    unsigned long long int n,t,i,num,c,res;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        s = dec_to_bin(n);
        for(i=0;i<s.length();i++)
            if(s[i]=='1')
                c++;
        cout<<c<<endl;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                num=s[i]-48;
                res = pow(3,i);
                cout<<res<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
