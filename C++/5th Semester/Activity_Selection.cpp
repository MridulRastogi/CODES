#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, start, end;
    cout<<"Enter the number of activities: ";
    cin>>n;
    vector<pair<int,int>> a, res;
    cout<<"Enter the starting and the ending time of the activities:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>start>>end;
        a.push_back(make_pair(end,start));
    }
    sort(a.begin(), a.end());
    cout<<endl;
    end   = a[0].first;
    start = a[0].second;
    res.push_back(make_pair(start,end));
    for(int i=1; i<n; i++)
        if(a[i].second > end)
        {
            end = a[i].first;
            res.push_back(make_pair(a[i].second, a[i].first));
        }
    for(auto j:res)
        cout<<j.first<<" "<<j.second<<endl;
    return 0;
}

/*
5
6 11
5 7
1 4
8 12
3 6
*/
