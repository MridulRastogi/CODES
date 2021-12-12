#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

int main()
{
    int i,n,m,x,y,node;
    for(i=0; i<N; i++)
        vis[i] = 0;         //declaring bool array vis equal to 0
    cin>>n>>m;              //inputting number of nodes and edges
    for(i=0; i<m; i++)
    {
        cin>>x>>y;              //inputting edges from x edge to y edge
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    vis[1] = true;

    while(!q.empty())
    {
        node = q.front();
        q.pop();
        cout<<node<<endl;
        vector<int> :: iterator it;
        for(it=adj[node].begin(); it!=adj[node].end(); it++)
        {
            if(!vis[*it])
            {
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }
    return 0;
}
/*
7 7
1 2
1 3
2 4
2 5
2 6
2 7
3 7
*/
