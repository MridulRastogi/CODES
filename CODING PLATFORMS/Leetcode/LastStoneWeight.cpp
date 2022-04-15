#include<bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones)
{
    int x,y;
    priority_queue<int> p;
    for(int i=0; i<stones.size(); i++)
        p.push(stones[i]);

    while(p.size()>1)
    {
        x = p.top();
        p.pop();
        y = p.top();
        p.pop();
        if(x-y > 0)
            p.push(x-y);
    }
    if(p.size()==0)
        return 0;
    return p.top();
}

int main()
{
    int i, n, num;
    cin >> n;
    vector<int> vec;
    for(i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    cout << lastStoneWeight(vec);
    return 0;
}

/*
6
2 7 4 1 8 1

*/
