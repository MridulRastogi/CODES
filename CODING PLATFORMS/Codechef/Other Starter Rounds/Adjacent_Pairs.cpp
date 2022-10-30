#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> first, second;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
        mp[vec[i]]++;
    }
    if(mp.size()==1)
    {
        cout << n/2 << endl;
        return;
    }
    int fn, sn, count=0;
    for(auto it = mp.rbegin(); it!=mp.rend(); it++)
    {
        fn = it->first;
        break;
    }
    for(auto it=mp.rbegin(); it!=mp.rend(); it++)
    {
        count++;
        if(count==2)
        sn = it->first;
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            first.push_back(fn);
            second.push_back(sn);
        }
        else
        {
            first.push_back(sn);
            second.push_back(fn);
        }
    }
    int c1=0, c2=0;
    for(int i=0; i<n; i++)
    {
        if(vec[i] == first[i])
            c1++;
        if(vec[i] == second[i])
            c2++;
    }
    int res = max(c1, c2);
    cout << n-res << endl;
}

signed main()
{
    FAST;
	int t;
	cin >> t;
	while(t--)
	    solve();
	return 0;
}
