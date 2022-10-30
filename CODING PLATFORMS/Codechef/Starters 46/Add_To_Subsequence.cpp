#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void solve()
{
    int n, num, counter=0;

    cin >> n;
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    unordered_map<int, int> mp;
    for(int i : vec)
    {
        if(mp.find(i) == mp.end())
        {
            mp[i]++;
        }
        else
        {
            counter++;
            mp.clear();
            mp[i]++;
        }
    }
    cout << counter << endl << endl;
}

int main()
{
    FAST;
	int t;
	cin >> t;
	while(t--)
	    solve();
	return 0;
}
