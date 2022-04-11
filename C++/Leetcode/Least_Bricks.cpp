#include<bits/stdc++.h>
using namespace std;

int leastBricks(vector<vector<int>>& wall)
{
    int c=0, s, r = wall.size();
    for(int i=0; i<wall[0].size(); i++)
        c += wall[0][i];
    char ar[r][c];
    for(int i=0; i<wall.size(); i++)
    {
        s = 0;
        for(int j=0; j<wall[i].size(); j++)
        {
            s = s + wall[i][j];
            ar[i][s-1] = '.';
        }
    }
    vector<int> counter(c,0);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            if(ar[i][j]!='.')
                counter[j]++;
    int minimum = INT_MAX;
    for(int i=0; i<counter.size()-1; i++)
        minimum = counter[i]<minimum ? counter[i] : minimum;
    if(minimum==INT_MAX)
        minimum = r;
    return minimum;
}

int main()
{
    vector<vector<int>> vec = {{5,1},{1,1,3,1},{6},{3,1,2},{1,2,2,1},{4,2},{4,1,1},{1,1,4},{5,1},{6},{6},{5,1},{6},{5,1},{6},{5,1},{6},{2,2,2},{6},{5,1},{5,1},{5,1},{1,3,2},{1,1,2,1,1},{5,1},{4,1,1},{6},{6},{5,1},{3,2,1}};
    //{{9,1},{10},{9,1}};//{{1,2,2,1},{3,1,2},{1,3,2},{2,4},{3,1,2},{1,3,1,1}};
    cout << leastBricks(vec);
    return 0;
}
