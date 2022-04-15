#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,q,w;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        q = sqrt((x*x)+(y*y));
        w = (x*x)+(y*y);
        if(x==0 && y==0)
            cout << 0 << endl;
        else if(q*q == w)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
