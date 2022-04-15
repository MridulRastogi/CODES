#include<bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    string s2="";
    for(int i=s.length()-1; i>=0; i--)
        s2 += s[i];
    return s2;
}

int main()
{
    string s, str;
    cin>>s;
    int start, end, l = s.length();
    map<string,int> m;
    for(int i=0; i<l-1; i++)
    {
        for(int j=l-1; j>i; j--)
        {
            if(i!=j)
            {
                start = i<j ? i : j;
                end   = i<j ? j : i;
                if(start==0 && end==(l-1))
                    str = reverse(s.substr(start, end));
                else if(start==0 && end!=(l-1))
                    str = reverse(s.substr(start,end)) + s.substr(end+1, l-1);
                else if(start!=0 && end==(l-1))
                    str = s.substr(0,start-1) + reverse(s.substr(start,end));
                else if(start!=0 && end!=(l-1))
                    str = s.substr(0,start-1) + reverse(s.substr(start, end)) + s.substr(end+1, l-1);
                cout << str << " Start = " << start << ", End = " << end << endl;
                if(str!=s)
                    m[str]++;
            }
        }
    }
    for(auto x:m)
        cout << " " << x.first << endl;
    cout << "\n Number of Distinct Strings: " << m.size() << endl;
    return 0;
}
