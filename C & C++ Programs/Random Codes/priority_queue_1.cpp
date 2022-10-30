#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> minHeap;

    vector<int> vec = {8,5,2,8,7,7,7,4,6,5};
    for(int i:vec)
        minHeap.push(i);

    while(minHeap.empty() == false)
    {
        cout<< minHeap.top() << " ";
        minHeap.pop();
    }

    return 0;
}