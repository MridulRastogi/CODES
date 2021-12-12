#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.first>b.first;
}

int main()
{
    int n, i, j, points, time, maxendtime=0, count=0, maxprofit=0;
    cout<<"Enter the number of jobs: ";
    cin>>n;
    cout<<"Enter the Points and Job Deadline: "<<endl;
    vector<pair<int,int>> job;
    for(i=0; i<n; i++)
    {
        cin>>points>>time;
        if(time>maxendtime)
            maxendtime = time;
        job.push_back(make_pair(points,time));
    }
    int fill[maxendtime];
    for(i=0; i<maxendtime; i++)
        fill[i] = -1;
    sort(job.begin(), job.end(), compare);
    for(i=0; i<n; i++)
    {
        j = job[i].second-1;
        while(j>=0 && fill[j]!=-1)
            j--;
        if(j>=0 && fill[j]==-1)
        {
            fill[j] = i;
            count++;
            maxprofit += job[i].first;
        }
    }
    cout<<endl<<maxprofit<<" "<<count<<endl;
    return 0;
}
/*
5
100 2
19 1
27 2
25 1
15 3
*/
