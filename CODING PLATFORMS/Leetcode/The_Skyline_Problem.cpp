#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getSkyline(vector<vector<int>>& buildings)
{
    priority_queue<vector<int>> pq;
    map<int , vector<pair<int,int>>> m;
    vector<vector<int>> ans;
    vector<vector<int>> vec;

    int count =0, width = 0;

    for(auto i : buildings)
    {
        m[i[0]].push_back({i[2],i[1]});     // pushing the right wall position and building height at the left wall's position
        m[i[1]].push_back({0,0});           // pushing 0,0 at the right wall's position
    }

    for(auto i : m)                     // iterating through the map
    {
        auto vec = i.second;                    // obtaining the vector stored at each wall in the map
        for(auto j : vec)
            if(j.first!=0)                      // if the vector is of the left wall then
                pq.push({j.first, j.second});       // pushing wall position and its data to a priority queue

        if(i.first == width)
            count = 0;

        while(!pq.empty() && pq.top()[1]<=i.first)
        {
            pq.pop();
        }
        if(!pq.empty() && pq.top()[0]>count)
        {
            count = pq.top()[0];
            width = pq.top()[1];
            ans.push_back({i.first,count});
        }
        else if(count == 0)
            ans.push_back({i.first, 0});
    }

    int prev = -1;
    for(auto i : ans)
        if(i[1]!=prev)
        {
            vec.push_back(i);
            prev = i[1];
        }
    return vec;
}

int main()
{
    vector<vector<int>> buildings = {{2,9,10},{3,7,15},{5,12,12},{15,20,10},{19,24,8}};
    sort(buildings.begin(), buildings.end());
    for(int i = 0; i<buildings.size(); i++)
        cout << "( " << buildings[i][0] << " , " << buildings[i][1] << " ) => " << buildings[i][2] << endl;
    vector<vector<int>>  result   = getSkyline(buildings);
    cout << endl;
    for(int i=0; i<result.size(); i++)
        cout << "[" << result[i][0] << "," << result[i][1] << "],";
    cout << endl;
    return 0;
}
