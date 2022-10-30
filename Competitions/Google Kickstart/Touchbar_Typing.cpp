#include<bits/stdc++.h>
using namespace std;
int result(vector<int>& s, vector<int>& k, int n, int m, map<int, vector<int>>& m)
{
    
}
int main()
{
    int t;
    cin >> t;
    for(int z=1; z<=t; z++)
    {
        vector<int> s, k;
        map<int, vector<int>> ma;
        int n, m;
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> s[i];
        cin >> m;
        for(int i=0; i<m; i++)
        {
            cin >> k[i];
            ma[k[i]].push_back(i);
        }
        cout << "Case #" << z << ": " << result(s,k,n,m,ma) << endl;
    }
    return 0;
}
