#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;

int main()
{
	vector<int> A = {9,8,1,0,1,9,4,0,4,1};
	vector<pair<int, int>> v;
	int val, res=0;

	for (int i=0; i<A.size(); i++)
	{
    	if (v.empty() || v.back().first > A[i])
    		v.push_back({ A[i], i });
    	else
    	{
    		val = lower_bound(all(v), make_pair(A[i], INT_MAX), greater<pair<int, int>>())->second;
    		res = max(res, i-val);
    	}
	}
	cout << res << endl;
	return 0;
}
