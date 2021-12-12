#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double cap, mcap=0, v, w;
    cout<<"Enter the capacity of the knapsack: ";
    cin>>cap;
    cout<<"Enter the number of items: ";
    cin>>n;
    cout<<"Enter the values and weight of the items: "<<endl;
    vector<pair<int,pair<int,int>>> a;
    for(int i=0; i<n; i++)
    {
        cin>>v>>w;
        a.push_back(make_pair(v/w,make_pair(v,w)));
    }
    // SORT IN DECREASING ORDER OF VALUE/WEIGHT
    sort(a.begin(),a.end());
    cout<<endl<<"Value\tWeight\tValue/Weight"<<endl;

    for(int i=0; i<n; i++)
        cout<<a[i].second.first<<"\t"<<a[i].second.second<<"\t"<<a[i].first<<endl;
    // Value Per Weight     Value       Weight

    for(int i=n-1; i>=0; i--)
        if(mcap+a[i].second.first <= cap)
            mcap += a[i].second.first;
        else
            mcap += (int(cap-mcap)/int(a[i].first))*a[i].first;
    cout<<endl<<"Max Values : "<<mcap<<"/"<<cap<<endl;

    return 0;
}
/*
110
5
21 7
24 4
12 6
40 5
30 6
*/
