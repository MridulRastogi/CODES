#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << int(pow(2,n)-1) << endl;
    }
    return 0;
}
