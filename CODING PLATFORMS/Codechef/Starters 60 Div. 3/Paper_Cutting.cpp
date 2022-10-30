#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int res = (n/k)*(n/k);
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
