#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int sort_freq(string s)
{
    int i,j,c=0;
    char ch;
    //transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(i=0;i<s.length()-1;i++)
        for(j=0;j<s.length()-i-1;j++)
            if(s[j]>s[j+1])
            {
                ch = s[j];
                s[j] = s[j+1];
                s[j+1] = ch;
            }
    for(i=0;i<s.length();i++)
        if(s[0]==s[i])
            c++;
    return c;
}
int main()
{
    int i,j,n,q,coun,wf,qf;
    cout<<"Enter the number of words : ";
    cin>>n;
    cin.ignore();
    string s[n];
    int freq[n];
    cout<<"Enter the words : "<<endl;
    for(i=0;i<n;i++)
        getline(cin,s[i]);

    cout<<"Enter the number of queries : ";
    cin>>q;

    cin.ignore();
    string query[q];
    cout<<"Enter the queries : "<<endl;
    for(i=0;i<q;i++)
        getline(cin,query[i]);

    for(i=0;i<n;i++)
    {
        coun = 0;
        wf = sort_freq(s[i]);
        for(j=0;j<q;j++)
        {
            qf = sort_freq(query[j]);
            if(wf<qf)
                coun++;
        }
        freq[i] = coun;
    }

    cout<<"[";
    for(i=0;i<n-1;i++)
        cout<<freq[i]<<",";
    cout<<freq[n-1]<<"]";

    return 0;
}
