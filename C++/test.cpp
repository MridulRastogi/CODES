/*int priceCheck( vector<string> products, vector<float> productPrices, vector<string> productSold, vector<float> soldPrice)
{
    int i,j,c=0;
    int lp = products.size();
    int ps = productSold.size();

    for(i=0; i<lp; i++)
        for(j=0; j<ps; j++)
            if(products[i] == productSold[j])
                if(soldPrice[j] != productPrices[i])
                    c++;
    return c;
}*/
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma")
#include <bits/stdc++.h>
#define check(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define ll long long
using namespace std;

template <typename val1>
    void __f(const char* name, val1&& value)
    {
    cout << name << " = " << value << endl;
    }

template <typename val1, typename... values>

void __f( const char* names, val1&& value, values&&... multiplevalue)
{
  const char* comma = strchr( names + 1, ',');
  cout.write(names, comma - names) << " = " << value << " ";
  __f(comma + 1, multiplevalue...);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int T=1; T<=t; T++)
    {
        cout << "Case #" << T << ": ";
        int n;
        cin >> n;
        string s;
        cin >> s;
        set <ll> ok;
        for(ll i = 0;i<n;i++)
            if(s[i] == '1')
                ok.insert(i);
        ll ans = 0;
        for(ll i = 0;i<n;i++)
        {
            if(s[i] == '1')
                continue;
            auto x = ok.lower_bound(i);
            ll dis = 1e9;
            if(x != ok.end())
                dis = min(dis , *x - i);
            if(x != ok.begin())
            {
                x--;
                dis = min(dis , i - *x);
            }
            ans += dis;
        }
        cout << ans << endl;
    }
    //cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}
