#include<bits/stdc++.h>
using namespace std;

void solve(int z)
{
    string fabric;
    long long n, durability, unique, counter=0;
    cin >> n;

    vector<pair<string, long long>> ada;
    vector<pair<long long, long long>> charles;

    for(int i=0; i<n; i++)
    {
        cin >> fabric >> durability >> unique;
        ada.push_back(make_pair(fabric, unique));
        charles.push_back(make_pair(durability, unique));
    }

    sort(ada.begin(), ada.end());
    sort(charles.begin(), charles.end());

    for(int i=0; i<n; i++)
        if(ada[i].second == charles[i].second)
            counter++;

    cout << "Case #" << z << ": " << counter << endl;
}

int main()
{
    int t;
    cin >> t;
    for(int z = 1; z<=t; z++)
        solve(z);
    return 0;
}
