#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    cin >> n;
    vector<int> earn, cost;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        earn.push_back(num);
    }
    for(int i=0; i<n; i++)
    {
        cin >> num;
        cost.push_back(num);
    }
    int c = 0;
    for(int i=0; i<n; i++)
        c += (earn[i]-cost[i]);
    if(c>=0)
        cout << "He doesn't need to earn.";
    else
        cout << "He needs to earn " << abs(c);
    return 0;
}
/*
3
3 4 2
5 3 4
*/
