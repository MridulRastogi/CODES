#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>& ar, int n)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        if(ar[i]==9)
            ar[i] = 0;
        else
        {
            ar[i]++;
            return ar;
        }
    }
    ar[0] = 1;
    ar.push_back(0);
    return ar;
}
int main()
{
    int n, i, a;
    cout<<"Enter the number of digits: ";
    cin>>n;
    vector <int> ar;
    for(i=0; i<n; i++)
    {
        cin >> a;
        ar.push_back(a);
    }
    solve(ar,n);
    for(i=0; i<n; i++)
        cout<<ar[i]<<" ";
    return 0;
}
