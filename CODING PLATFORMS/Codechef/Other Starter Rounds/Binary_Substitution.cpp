#include <bits/stdc++.h>
#define int long long
using namespace std;
int mod = 998244353;
int res, des, len;

int compute(string s, int pos)
{
    if(pos == len)
        return 1;
    for(int i=pos; i<len; i++)
    {
        if(s[i]=='a' or s[i]=='b')//and (s[i+1]=='a' or (i+1)==len))
            return res+1+compute(s, pos+1);
        //else if(s[i] == 'b')// and (s[i+1]=='b' or (i+1)==len))
        //    return res+1+compute(s, pos+1);
        if((s[i]=='a' and s[i+1]=='b') or (s[i]=='b' and s[i+1]=='a'))
            return des+1+compute(s, pos+2);
    }
    return res*des;
}

void solve()
{
    string s;
    cin >> s;
    res = 1;
    des = 0;
    len = s.length();
    int result = compute(s,0);
    cout << result << endl;
}

signed main()
{
	int t;
	cin >> t;
	while(t--)
	    solve();
	return 0;
}
