#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void solve()
{
    vector<int> vec;
    map<int, vector<pair<int, int>>> m;
    int n, k, counter=0, num;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
        m[(i+1)%k].push_back(make_pair(i , num));
    }

    for(auto it=m.begin(); it!=m.end(); it++)
    {
        vector<pair<int, int>> v = it->second;
        //copy((it->second).begin() , (it->second).end(), back_inserter(v));
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v.size()-1; j++)
            {
                if(v[j].second > v[j+1].second)
                {
                    swap(v[j].second, v[j+1].second);
                }
            }
        }
        for(int i=0; i<v.size(); i++)
            vec[v[i].first] = v[i].second;
    }

    long long s = 0;
    for(int i=vec.size()-1; i>=0; i--)
    {
        if(counter < k)
            s += vec[i];
        else
            break;
        counter++;
    }

    cout << s << endl << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
