#include<bits/stdc++.h>
using namespace std;

vector<int> space_seprated_values(string s)
{
    vector<int> v;
    stringstream ss(s);
    while(ss.good())
    {
        string substr;
        getline(ss, substr, ' ');
        stringstream convert(substr);
        int x=0;
        convert >> x;
        v.push_back(x);
    }
    return v;
}

void dynamic_programming(int n, int ar[][n], int start, int end, int count, vector<int> &result)
{
    for(int i=0; i<n; i++)
        if(ar[start][i] == 1)
        {
            if(i==end)
                result.push_back(count);
            ar[start][i] = 0;
            dynamic_programming(n, ar, i, end, count+1);
            ar[start][i] = 1;
        }
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<vector<int>> vec;
    vector<int> result;
    for(int i=0; i<n; i++)
    {
        vector<int> v;
        string s;
        getline(cin,s);
        v = space_seprated_values(s);
        vec.push_back(v);
    }
    int ar[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<vec[i].size(); j++)
            ar[i][vec[i][j]] = 1;
    getline(cin,s);
    v = space_seprated_values(s);
    int start = v[0];
    int end   = v[1];
    dynamic_programming(n, ar, start-1, end-1, 0, result);
    if(result.size()==0)
        cout<<-1;
    else
    {
        sort(result.begin(), result.end());
        cout<<result[0];
    }
    return 0;
}
/*
5
2 4
1
1 5
2 3
5
2 3
*/
