#include<bits/stdc++.h>
using namespace std;

map<char, int> m;
void solve()
{
    string s, p, result="";
    cin >> s >> p;
    int se = s.length()-1;
    int pe = p.length()-1;
    char sl = s[se];
    char pl = p[pe];
    if(s==p)
    {
        result = "=";
    }
    else if(s[se] == p[pe])
    {
        if(s[se]=='L')
            result = (se>pe ? ">" : "<");
        else if(s[se]=='S')
            result = (se>pe ? "<" : ">");
    }
    if(m[sl] != m[pl])
    {
        result = ((m[sl] > m[pl]) ? ">" : "<");
    }
    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    m['S'] = 1;
    m['M'] = 2;
    m['L'] = 3;
    while(t--)
        solve();
    return 0;
}
