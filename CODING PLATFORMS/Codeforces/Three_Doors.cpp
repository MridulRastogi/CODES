#include<bits/stdc++.h>
using namespace std;
string res(int ar[], int have)
{
    if(have == 0)
        return "NO";
    int c=0;
    while(ar[have]!=0 and ar[have]!=-1)
    {
        have = ar[have];
        c++;
    }
    if(c==2)
        return "YES";
    else
        return "NO";
}
int main()
{
    int t, x;
    cin >> t;
    while(t--)
    {
        int ar[4];
        ar[0] = -1;
        cin >> x;
        cin >> ar[1] >> ar[2] >> ar[3];
        cout << res(ar, x) << endl;
    }
    return 0;
}
