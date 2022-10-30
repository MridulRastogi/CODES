#include<bits/stdc++.h>
using namespace std;

int result(string i, string o)
{
    int z, c=0, l=o.length();
    for(z=0; z<l-1; z++)
    {
        if(i[z] == o[z])
        {
            i = i.substr(z+1, i.length()-1);
            o = o.substr(z+1, o.length()-1);
        }
        else
        {
            o = o.substr(z+2, o.length()-1);
            c++;
        }
    }
    if(i.length()==o.length())
        return c;
    else
        return -1;
}

int main()
{
    int t;
    cin>>t;
    char ch;
    for(int z=1; z<=t; z++)
    {
        string in, out;
        cin>>in>>out;
        int res = result(in, out);
        if(res==-1)
            cout << "Case #" << z << ": IMPOSSIBLE" << endl;
        else
            cout << "Case #" << z << ": " << res << endl;
    }
    return 0;
}
