#include<bits/stdc++.h>
using namespace std;
string getResult(string s, int l)
{
    int c = 0;
    while(c!=l)
    {
        if(s[c]=='a' or s[c]=='e' or s[c]=='i' or s[c]=='o' or s[c]=='u')
        {
            string starting = s.substr(0,c);
            reverse(starting.begin(), starting.end());
            s = starting + s.substr(c,l);
        }
        c++;    
    }
    return s;
}
int main()
{
    int t, l;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> l >> s;
        cout << getResult(s, l) << endl;
    }
    return 0;
}
