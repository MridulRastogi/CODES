#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="[[5,1],[1,1,3,1],[6],[3,1,2],[1,2,2,1],[4,2],[4,1,1],[1,1,4],[5,1],[6],[6],[5,1],[6],[5,1],[6],[5,1],[6],[2,2,2],[6],[5,1],[5,1],[5,1],[1,3,2],[1,1,2,1,1],[5,1],[4,1,1],[6],[6],[5,1],[3,2,1]]";
    string a="";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='[')
            a+='{';
        else if(s[i]==']')
            a+='}';
        else a+=s[i];
    }
    cout<<a;
    return 0;
}
