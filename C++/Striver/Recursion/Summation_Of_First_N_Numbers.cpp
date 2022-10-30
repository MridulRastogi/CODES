#include<bits/stdc++.h>
using namespace std;

void summation(int n, int s)
{
    if(n==0)
    {
        cout << s;
        return;
    }
    summation(n-1, s+n);
}

int main()
{
    int n, s=0;
    cin >> n;
    summation(n, s);
    return 0;
}
