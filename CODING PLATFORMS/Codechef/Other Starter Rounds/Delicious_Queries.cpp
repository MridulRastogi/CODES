#include <bits/stdc++.h>
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int compute(vector<int>& cop, int p, int k)
{
    FAST;
    bool flag = false;
    vector<int> ele, ele_pos, vec = cop;
    int sum = 0;

    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]%p == 0)
        {
            flag = true;
            ele.push_back(vec[i]);
            ele_pos.push_back(i);
        }
        if(i<k)
        {
            sum += vec[i];
            if(!flag and (i+1)==k)
                return sum;
        }
    }

    sum = 0;
    sort(ele.rbegin(), ele.rend());
    for(int i=0; i<ele.size(); i++)
        vec[ele_pos[i]] = ele[i];
    for(int i=0; i<k; i++)
        sum += vec[i];
    return sum;
}

void solve()
{
    FAST;
    int n, p, k, num, nq;
    vector<int> vec;
    bool flag = false;

    cin >> n;                                   // number of elements
    for(int i=1; i<=n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    cin >> nq;                                  // number of queries
    for(int i=1; i<=nq; i++)                    // queries start
    {
        cin >> p >> k;                          // prime number and number of dishes
        cout << compute(vec, p, k) << endl;
    }
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
