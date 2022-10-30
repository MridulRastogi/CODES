#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s;
    int n,i,j,k;
    string str;
    cout<<"Enter number of words: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>str;
        s.push_back(str);
    }
    for(i=0; i<n; i++)
    {
        map<char,int> m;
        for(int k=97; k<=122; k++)
        {
            m.insert({char(k),0});
        }
        for(j=0; j<s[i].length(); j++)
        {
            if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u')
                m[s[i][j]]++;
        }
        cout<<s[i][j]<<endl;
        for(int k=0; k<m.size(); k++)
            cout << m[k] << endl;
        cout<<endl;
    }


    return 0;
}
