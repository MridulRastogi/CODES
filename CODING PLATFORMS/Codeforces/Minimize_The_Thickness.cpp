#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, num;
    cin >> n;
    vector<int> vec, lr(n,0), rl(n,0);
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    if(vec.size()==1)
    {
        cout << 1 << endl;
        return;
    }

    lr[0] = vec[0];
    rl[n-1] = vec[n-1];

    for(int i=1; i<n; i++)
        lr[i] = lr[i-1] + vec[i];
    for(int i=n-2; i>=0; i--)
        rl[i] = rl[i+1] + vec[i];

    for(int i:lr)
        cout << i << " ";
    cout << endl;
    for(int i:rl)
        cout << i << " ";
    cout << endl;

    int l=0, r=n-1;
    for(int i=0; i<n-1; i++)
    {
        if(lr[i] == rl[i+1])
        {
            cout << endl << max(i+1, n-(i+1)) << endl << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
