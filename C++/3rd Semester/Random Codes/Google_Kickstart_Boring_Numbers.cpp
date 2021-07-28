#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int check(string s)
{
    int l,e=0,o=0,i,temp;
    string ch;
    l = s.length();
    for(i=0;i<l;i+=2)
    {
        ch = s[i];
        temp = std::stoi(ch);
        if(temp%2==1)
            o++;
    }
    for(i=1;i<l;i+=2)
    {
        ch = s[i];
        temp = std::stoi(ch);
        if(temp%2==0)
            e++;
    }
    if((o+e)==l)
        return 1;
    else
        return 0;
}

int main()
{
    int t,z,i,b;
    long long int l,r;
    string s;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        b=0;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            s = to_string(i);
            if(check(s)==1)
                b++;
        }
        cout<<"Case #"<<z<<": "<<b<<endl;
    }
    return 0;
}
