#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>& vec)
{
    for(int i=0; i<vec.size(); i++)
    {
        cout << "[";
        for(int j=0; j<vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << "],";
    }
}

void print(vector<int>& vec)
{
    for(int i:vec)
        cout << i << " ";
    cout << endl;
}

vector<vector<int>> groupThePeople(vector<int>& groupSizes)
{
    vector<vector<int>> res;
    map<int, vector<int>> m;
    int c=0;

    for(int i=0; i<groupSizes.size(); i++)
        m[groupSizes[i]].push_back(i);

    for(auto const &it : m)
    {
        cout << it.first << " => ";
        vector<int> v;

        for(auto const &itr : it.second)
        {
            v.push_back(itr);
            c++;
            if(c==it.first)
            {
                res.push_back(v);
                v.clear();
                c=0;
            }
            cout << " " << itr;
        }

        if(v.size()>0)
            res.push_back(v);
        cout << endl;
    }

    return res;
}

int main()
{
    vector<vector<int>> vec = {{3,3,3,3,3,1,3},{2,1,3,3,3,2}};
    for(int i=0; i<vec.size(); i++)
    {
        print(vec[i]);
        cout << endl;
        vector<vector<int>> v = groupThePeople(vec[i]);
        print(v);
        cout << endl << endl;
    }
    return 0;
}
