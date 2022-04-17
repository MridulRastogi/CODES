#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    vector<pair<int, int>> vec;
    for(int i=0; i<3; i++)
    {
        cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }
    sort(vec.begin(), vec.end());
    for(auto i:vec)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
