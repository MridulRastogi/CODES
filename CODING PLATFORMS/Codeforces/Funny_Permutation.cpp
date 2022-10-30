#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec;
    for(int i=n; i>0; i--)
        vec.push_back(i);
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i] == i+1)
        {
            if(i%2==0)
                swap(vec[i], vec[i+1]);
            else
                swap(vec[i], vec[i-1]);
        }
    }
    for(int i=0; i<vec.size(); i++)
        if(vec[i] == (i+1))
        {
            cout << -1 << endl;
            return;
        }
    for(int i:vec)
        cout << i << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
