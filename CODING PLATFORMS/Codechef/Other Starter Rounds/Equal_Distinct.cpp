#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, l, r;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int ar[n];
        unordered_map<int, int> m;

        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
            if(m.find(ar[i]) == m.end())
                m[ar[i]] = 1;
            else
                m[ar[i]]++;
        }

        vector<int> vec;
        for(auto it:m)
            vec.push_back(it.second);
        sort(vec.begin(), vec.end());

        l=0, r=0;
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i] == 1)
            {
                if(l<=r)
                    l++;
                else
                    r++;
            }
            else if(vec[i] > 1)
            {
                if(l==r)
                {
                    l++;
                    r++;
                }
                else if(l<r)
                    l++;
                else
                    r++;
            }
        }
        cout << (l==r ? "YES\n" : "NO\n");
    }
	return 0;
}
