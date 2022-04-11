#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, num, sum, x, y, n, b, c;
    cin >> t;
    while(t--)
    {
        cin >> n >> b >> x >> y;
        num = sum = 0;
        c = 1;
        while(c<=n)
        {
            if((num+x)<=b)
            {
                num += x;
                sum += num;
            }
            else
            {
                num -= y;
                sum += num;
            }
            c++;
        }
        cout << sum << endl;
    }
    return 0;
}
