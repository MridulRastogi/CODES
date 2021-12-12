#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.first>b.first;             //This will sort the job vector in descending order.
}

int main()
{
    vector<pair<int,int>> j;
    int  p,d,job;
    cout<<"Enter the number of jobs: ";
    cin>>job;
    cout<<"Enter the profits and deadlines:\n";
    for(int i=0; i<job; i++)
    {
        cin>>p>>d;
        j.push_back(make_pair(p,d));
    }
    cout<<endl;
    sort(j.begin(), j.end(), compare);
    for(auto i:j)
        cout<<i.first<<" "<<i.second<<endl;
    return 0;
}
