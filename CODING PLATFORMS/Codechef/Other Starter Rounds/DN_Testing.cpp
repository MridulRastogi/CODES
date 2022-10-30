#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll unsigned long long
using namespace std;

ll res, val;

ll getResult(ll n, ll k, map<ll, ll>& vec)
{
    if(n==1 or k==0)
    {
        if(vec.find(n)==vec.end())
            vec[n] = n;
        return n;
    }
    res = 0;
    for(ll i=1; i<=n/2; i++)
        if(n%i==0)
        {
            if(vec.find(n*i)==vec.end())
            {
                val = getResult(n*i, k-1, vec);
                res += val;
                vec[n*i] = val;
            }
        }
    val = getResult(n*n, k-1, vec);
    res += val;
    vec[n*n] = val;
    return res;
}

int main()
{
    FAST;
    ll t, n, k;
    cin >> t;
    while(t--)
    {
        map<ll, ll> vec;
        cin >> n >> k;
        ll res = getResult(n, k, vec);
        ll finalResult = 0;
        for(auto it:vec)
            finalResult += it.first;
        cout << " ========>  " << finalResult << endl;
        vec.clear();
    }
	return 0;
}
