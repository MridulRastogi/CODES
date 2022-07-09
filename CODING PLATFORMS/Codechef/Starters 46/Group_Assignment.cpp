#include<bits/stdc++.h>
using namespace std;
string result(int n, vector<int>& vec)
{
    unordered_map<int, int> m;
    for(int i=0; i<n; i++)
    {
        if(m.find(vec[i]) == m.end())
            m[vec[i]] = 1;
        else
            m[vec[i]]++;
    }
    for(auto it : m)
        if(it.second%it.first != 0)
            return "No";
    return "Yes";
}
int main()
{
    int t, n, num;
    string flag;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        cout << result(n, vec) << endl;
    }
    return 0;
}
