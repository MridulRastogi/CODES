#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, num, maximum=0;
    cin >> n;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        mp[num]++;
    }
    if(mp.size()==1)
    {
        cout << 0 << endl;
        return;
    }
    for(auto it:mp)
        maximum = max(maximum, it.second);
    cout << n-maximum << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
