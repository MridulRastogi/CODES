#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cstring>
using namespace std;

bool check(char s[], int n)
{
    size_t size = sizeof(s)/sizeof(s[0]);
    for(int i=0; i<n-1; i++)
    {
        int a = s[i]-'0';
        int b = s[i+1]-'0';
        if((b-a)==1 || (a-b)==9)
            return true;
    }
    return false;
}

void shift(char s[], int k, int n)
{
    for(int i=k; i<n; i++)
        s[i] = s[i+1];
    s[n] = '\0';
}

void edit(char s[], char l, char r, char rep, int n)
{
    int i;
    string s2 = "";
    for(i=0; i<n; i++)
    {
        if(s[i]==l && s[i+1]==r)
        {
            s[i] = rep;
            n=n-1;
            shift(s,i+1,n);
        }
    }
}

int main()
{
    int t,n,z,i;
    cin>>t;
    for(z=1; z<=t; z++)
    {
        cin>>n;
        char s[n];
        for(i=0; i<n; i++)
            cin>>s[i];
        string j = s;
        if(n==1)
            cout<<"Case #"<<z<<": "<<j<<endl;
        else
        {
            bool flag = true;
            while(flag==true)
            {
                edit(s,'0','1','2',n);
                edit(s,'1','2','3',n);
                edit(s,'2','3','4',n);
                edit(s,'3','4','5',n);
                edit(s,'4','5','6',n);
                edit(s,'5','6','7',n);
                edit(s,'6','7','8',n);
                edit(s,'7','8','9',n);
                edit(s,'8','9','0',n);
                edit(s,'9','0','1',n);
                flag = check(s,n);
            }
            cout<<"Case #"<<z<<": ";
            size_t size = sizeof(s)/sizeof(s[0]);
            for(i=0; i<size; i++)
                cout<<s[i];
            cout<<endl;
        }
    }
    return 0;
}
