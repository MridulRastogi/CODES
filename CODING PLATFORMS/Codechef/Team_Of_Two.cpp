#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> a, vector<int> b)
{
    set<int> s;
    for(int i:a)
        s.insert(i);
    for(int i:b)
        s.insert(i);
    return (s.size()==5);
}

int main()
{
    int t, n, noq, qno;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<pair<int, vector<int>>> vec;
        for(int i=0; i<n; i++)
        {
            cin >> noq;
            vector<int> v;
            for(int j=1; j<=noq; j++)
            {
                cin >> qno;
                v.push_back(qno);
            }
            vec.push_back(make_pair(noq, v));
        }
        sort(vec.begin(), vec.end());

        bool containsAll = false;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((vec[i].first + vec[j].first) >= 5)
                {
                    containsAll = check(vec[i].second, vec[j].second);
                    if(containsAll == true)
                    {
                        cout << "YES\n";
                        break;
                    }
                }
            }
        }
        if(containsAll == false)
        cout << "NO\n";
    }
	return 0;
}
