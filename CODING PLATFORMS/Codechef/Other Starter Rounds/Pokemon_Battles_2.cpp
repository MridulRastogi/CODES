#include<bits/stdc++.h>
using namespace std;
void takeInput(vector<int>& vec, int n)
{
    int num;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
}
void print(vector<int>& vec)
{
    for(int i:vec)
        cout << i << " ";
    cout << endl;
}
void printVectorPair(vector<pair<pair<int, int>, int>>& vec)
{
    for(int i=0; i<vec.size(); i++)
        cout << vec[i].first.first << " " << vec[i].first.second << " => " << vec[i].second << endl;
    cout << endl;
}
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> g, w;
        takeInput(g, n);
        takeInput(w, n);
        vector<pair<pair<int, int>, int>> vec;
        for(int i=0; i<n; i++)
            vec.push_back(make_pair(make_pair(g[i], w[i]), i));
        cout << endl;
        printVectorPair(vec);
        sort(vec.begin(), vec.end());
        printVectorPair(vec);
    }
    return 0;
}
