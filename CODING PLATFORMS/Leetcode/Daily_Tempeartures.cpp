#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& t)
{
    vector<pair<int, int>> vec;
    vector<int> result(t.size(), 1);
    for(int i=0; i<t.size(); i++)
    {
        vec.push_back(make_pair(t[i], i));
    }
    for(auto j:vec)
        cout << j.first << " " << j.second << endl;
    cout << endl << endl;
    sort(vec.begin(), vec.end());
    for(int i=0; i<vec.size(); i++)
        cout << vec[i].first << " " << vec[i].second << endl;
    cout << endl;
    return result;
}

int main()
{
    vector<int> vec, res;
    vec = {73,74,75,71,69,72,76,73};
    res = dailyTemperatures(vec);
    for(int i:res)
        cout << i << " ";
    return 0;
}
