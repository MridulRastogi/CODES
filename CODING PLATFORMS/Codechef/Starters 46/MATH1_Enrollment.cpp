#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,diff;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        if(x<y)
            diff = y-x;
        else
            diff = 0;
        cout << diff << endl;
    }
    return 0;
}
