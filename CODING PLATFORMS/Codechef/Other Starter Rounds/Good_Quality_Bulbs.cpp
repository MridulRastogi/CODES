#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x, num, s, i, res;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        s=0;
        for(i=0; i<n-1; i++)
        {
            cin>>num;
            s += num;
        }
        res = max(0, (n*x)-s);
        cout << res << endl;
    }
    return 0;
}
