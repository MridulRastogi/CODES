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
    vector<pair<int,pair<int,int>>> a;
    for(int i=0; i<n; i++)
    {
        cin>>v>>w;
        a.push_back(make_pair(v/w,make_pair(v,w)));
    }

    sort(a.begin(),a.end());
    cout<<endl;

    for(int i=0; i<n; i++)
        cout<<a[i].first<<" "<<a[i].second.first<<" "<<a[i].second.second<<endl;
    // Value Per Weight     Value       Weight

    for(int i=n-1; i>=0; i--)
        if(mcap+a[i].second.first <= cap)
            mcap += a[i].second.first;
        else
            mcap += (int(cap-mcap)/int(a[i].first))*a[i].first;
    cout<<endl<<mcap<<endl;
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
