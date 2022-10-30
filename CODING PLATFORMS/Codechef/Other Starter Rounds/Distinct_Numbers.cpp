#include <bits/stdc++.h>
using namespace std;

int res;
vector<vector<int>> vec;
int getResult(int n, int k)
{
    if(n==1 or k==0)
        return n;
    res = 0;
    int var;
    vector<int> v;
    for(int i=1; i<=n; i++)
        if(n%i==0)
        {
            var = getResult(n*i, k-1);
            v.push_back(var);
            res += var;
        }
    vec.push_back(v);
    return res;
}

int main()
{
    int t, n, k;
    cin >> t;
    cout << endl;
    while(t--)
    {
        cin >> n >> k;
        int res = getResult(n, k);
        if(vec.size()>1)
        {
            int r = vec.size()-1;
            cout << vec[r][vec[r].size()-1] + vec[0][0] << endl;
        }
        else
            cout << res << endl;
        // cout << "Result => " << res << endl;
        // for(int i=0; i<vec.size(); i++)
        // {
        //     for(int j=0; j<vec[i].size(); j++)
        //         cout << vec[i][j] << " ";
        //     cout << endl;
        // }
        // cout << endl;
        vec.clear();
    }
	return 0;
}
