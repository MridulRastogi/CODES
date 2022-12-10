#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, one=0, zero=0;
    string s, result;
    cin >> n >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
            one++;
        else
            zero++;
    }
    result = ((one and zero) ? "NO" : "YES");
    cout << result << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	    solve();
	return 0;
}
