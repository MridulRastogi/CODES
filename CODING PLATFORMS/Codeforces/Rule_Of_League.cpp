#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void solve()
{
    long long n, x, y;
    cin >> n >> x >> y;
    if( (x==0 and y==0) or (x!=0 and y!=0))
    {
        cout << -1 << endl;
        return;
    }
    if(x<y)
        swap(x,y);

    if( ((n-1)%x) == 0 )
    {
        long long q = 1;
        y = 0;
        for(long long i=0; i<(n-1); i++)
        {
            if(x==y)
            {
                y = 0;
                q = i+2;    
            }
            y++;
            cout << q << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
        return;
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
