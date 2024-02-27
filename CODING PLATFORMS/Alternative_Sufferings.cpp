#include<bits/stdc++.h>
#define int long long
using namespace std;

int ar[100001];
void solve()
{
    string s, p;
    int n, k;
    cin >> n >> k >> s;
    k--;
    s = "." + s + ".";
    p = s;

    for(int i=1; i<=n; i++)
    {
        if(s[i] == '1')
        {
            p[i] = '0';
            if(s[i-1] == '0')
                p[i-1] = '1';
            if(s[i+1] == '0')
                p[i+1] = '1';
        }
    }
    s = p.substr(1,n);
    for(int j=0, maxi=INT_MAX; j<n; j++,maxi++)
    {
        if(s[j] == '1')
            maxi = 0;
        ar[j] = maxi;
    }
    for(int j=n, maxi=INT_MAX; j>=0; j--,maxi++)
    {
        if(s[j] == '1')
            maxi = 0;
        ar[j] = min(maxi, ar[j]);
    }
    for(int j=0; j<n; j++)
    {
        // cout << ( k<ar[j] ? '0' : ((k-ar[j])%2==0 ? '1' : '0') );
        if(k < ar[j])
            cout << '0';
        else
            cout << ((k-ar[j])%2==0 ? '1' : '0');
    }
    cout << endl;
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
