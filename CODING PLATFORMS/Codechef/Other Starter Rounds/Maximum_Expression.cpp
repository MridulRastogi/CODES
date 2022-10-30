#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s)
{
    int plus = 0, minus = 0, pos = 0;
    string s2 = "";
    sort(s.rbegin(), s.rend());
    for(int i=s.length()-1; i>=0; i--)
    {
        if(s[i] == '+')
            plus++;
        else if(s[i] == '-')
            minus++;
        else
        {
            pos = i+1;
            break;
        }
    }
    s = s.substr(0,pos);
    for(int i=s.length()-1; i>=0; i--)
    {
        s2 = s[i] + s2;
        if(minus > 0)
        {
            s2 = '-' + s2;
            minus--;
        }
        else if(plus > 0)
        {
            s2 = '+' + s2;
            plus--;
        }
    }
    cout << s2 << endl;
}

int main()
{
    int t, n;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        solve(n, s);
    }
	return 0;
}
