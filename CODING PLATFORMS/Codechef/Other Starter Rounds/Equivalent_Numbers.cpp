#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

const long long MOD=1e9+7;
const long long MAX=1000100;
vector<long long> track(MAX,MOD);

void solve()
{
    long long x, y;
    cin >> x >> y;
    cout << ((track[x] == track[y]) ? "Yes" : "No") << endl;
}

int main()
{
    FAST;
    for(long long i=2; i<MAX; i++)
    {
        long long cur = i;
        while(cur < MAX)
        {
            track[cur] = min(track[cur] , i);
            cur = cur*i;
        }
    }
    for(long long i=0; i<=100; i++)
        cout << i << " => " << track[i] << endl;
    long int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
