#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

int main()
{
    int i,n,m,x,y,node;
    for(i=0; i<N; i++)
        vis[i] = 0;                     //declaring bool array vis equal to 0
    cin >> n >> m;                      //inputting number of nodes and edges
    for(i=0; i<m; i++)
    {
        cin >> x >> y;                  //inputting edges from x edge to y edge
        adj[x].push_back(y);            //pushing the nodes x from the connection of nodes x and y
        adj[y].push_back(x);            //pushing the nodes y from the connection of nodes x and y
    }
    queue<int> q;                       //declaring a queue for inertion from one side and deletion from another side
    q.push(1);                              //first element as 1 for queue
    vis[1] = true;                          //first position except 0 allocated with "true"

    while(q.empty() == false)           //if queue is not empty (since it already has a one)
    {
        node = q.front();               //getting the first element of queue in an integer variable node
        q.pop();                        //popping the element from queue extracted in node
        cout<<node<<endl;
        vector<int> :: iterator it;     //declaring an interator for traversing the adjacency list Vector
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
