#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, at, bt, wt, tat;
    cout<<"Enter the number of processes: ";
    cin>>n;
    vector<pair<pair<int,int>,int>> atbt;
    vector<pair<int,int>> wttat;
    for(i=1; i<=n; i++)
    {
        cout<<"Enter Arrival and Burst Time of process "<<i<<" : ";
        cin>>at>>bt;
        atbt.push_back(make_pair(make_pair(at,bt),i));
    }
    sort(atbt.begin(), atbt.end());

    wttat.push_back(make_pair(0, atbt[0].first.second));
    for(i=1; i<n; i++)
    {
        wt  = atbt[i-1].first.second + wttat[i-1].first;          ;
        tat = atbt[i].first.second + wttat[i-1].second;
        wttat.push_back(make_pair(wt, tat));
    }
    cout<<"P.No.\tAT\tBT\tWT\tTAT"<<endl;
    for(i=0; i<n; i++)
        cout<<atbt[i].second<<"\t"<<atbt[i].first.first<<"\t"<<atbt[i].first.second<<"\t"<<wttat[i].first<<"\t"<<wttat[i].second<<endl;
    return 0;
}
/*
4
0 8
1 4
0 1
1 1

4
1 3
2 4
1 2
4 4
*/

/*
AT BT WT TAT
0  1  0   1
0  8  1   9
1  1  9   10
1  4  10
*/
