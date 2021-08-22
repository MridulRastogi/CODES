#include<iostream>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int printDups(string str)
{
    map<char, int> count;
    int i,s=0;
    for (i=0;i<str.length();i++)
        count[str[i]]++;
    for (auto it : count)
        if (it.second > 1)
            s = s + int(it.second);
    return s;
}
bool nsame(string s, string s2)
{
    bool flag = true;
    for(int i=0;i<s.length();i++)
        if(s[i]==s2[i])
        {
            flag = false;
            break;
        }
    return flag;
}
int main()
{
    int t,i,j,l,rc,nrc;
    string s,s2;
    char ch;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        rc = printDups(s);
        nrc = s.length() - rc;
        if(nrc>=rc)
        {
            s2 = s;
            l = s.length();
            while(nsame(s,s2)==false)
            {
                ch = s2[l-1];
                for (j=l-1 ; j>0 ; j--)
                    s2[j] = s2[j-1];
                s2[0] = ch;
            }
                //random_shuffle(s2.begin(),s2.end());
            cout<<"Case #"<<i<<": "<<s2<<endl;
        }
        else
            cout<<"Case #"<<i<<": IMPOSSIBLE"<<endl;
    }
    return 0;
}

/*
5
start
starts
mississipi
bottle
mouse
*/
