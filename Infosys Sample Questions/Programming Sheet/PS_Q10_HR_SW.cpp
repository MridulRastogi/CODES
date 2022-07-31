#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll factorial(ll n)
{
    ll p=1;
    for(ll i=1; i<=n; i++)
        p *= i;
    return p;
}

ll binomial(ll r)
{
    ll n = r+9;
    ll res = (factorial(n) / (factorial(r)) / factorial(n-r));
    return res;
}

int main()
{
    ll n, num, res=0;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> num;
        res += binomial(num);
        cout << "Result: " << res << endl;
    }
    return 0;
}
