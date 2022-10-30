#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    set<int> pt;

    for(int i=1; i<=(2*n); i++)
        pt.insert(i);
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
        if(pt.count(vec[i])!=0)
            pt.erase(vec[i]);
    }
    int max_score = 0, first;
    int max_ele   = *max_element(vec.begin(), vec.end());
    for(int times=1; times<=k; times++)
    {
        first = *pt.begin();
        if(max_ele < first)
        {
            first = *--pt.end();
            max_ele = max(max_ele, first);
            vec.push_back(first);
            max_score += (max_ele-first);
            pt.erase(first);
        }
        else
        {
            vec.push_back(first);
            max_ele = max(max_ele, first);
            max_score += (max_ele-first);
            pt.erase(first);
        }
    }
    cout << max_score << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	    solve();
	return 0;
}
