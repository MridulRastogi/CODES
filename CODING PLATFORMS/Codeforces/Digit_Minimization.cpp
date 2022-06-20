#include<bits/stdc++.h>
using namespace std;
typedef long long int  lli;

int getResult(string s)
{
    if(s.length()==1)
        return string(s[0]);
    else if(s.length()==2)
    {
        int a = s[0]-48;
        int b = s[1]-48;
        return ( a<b ? string(s[1]) : string(s[0]) );
    }
    else
    {
        int mini = INT_MAX;
        for(int i=0; i<s.length(); i++)
        {
            int n = s[i]-48;
            mini = (n!=-2 and n!=0 ? min(mini, n) : mini);
        }
        return string(mini);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, s2;
        bool flag = false;
        cin >> s;
        s2 = s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='.')
            {
                s2 = getResult(s.substr(0, i)) + getResult(s.substr(i+1, s.length()));
                flag = true;
                break;
            }
        }
        if(flag==true)
        {
            stringstream seek(s2);
            lli x=0;
            seek >> x;
            cout << x << endl;
        }
        else
        {
            string s3 = getResult(s2);
            stringstream seek(s3);
            lli x=0;
            seek >> x;
            cout << x << endl;
        }
    }
    return 0;
}
