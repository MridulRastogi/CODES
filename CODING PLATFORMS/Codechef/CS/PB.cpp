#include<bits/stdc++.h>
#define int long long
using namespace std;

int n, t, q;

void takeInput(vector<int>& vec, int n)
{
    int num;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
}

vector<int> discrete(vector<int> q)
{
    vector<int> a=q;
    sort(a.begin(), a.end());a
    a.erase(unique(a.begin(), a.end()), a.end());
    for(int i=0; i<(int)q.size(); ++i)
        q[i] = lower_bound(a.begin(), a.end(), q[i]) - a.begin();
    return q;
}

void solve()
{
    vector<int> a,b,c,s,p,r;
    cin >> n;
    t = 0;  q = 0;
    takeInput(a, n);
    takeInput(b, n);
    a = discrete(a);
    b = discrete(b);
    c.resize(n);
    s.resize(n);
    r.resize(n);
    for(int i=0; i<n; ++i)
    {
        c[a[i]] = b[i];
        s[i]    = a[i]+b[i];
        r[b[i]] = i;
    }
    for(int i=0; i<n; ++i)
    {
        p.insert(upper_bound(p.begin(), p.end(), c[i]), c[i]);
        s[r[c[i]]] -= lower_bound(p.begin(), p.end(), c[i]) - p.begin();
    }
    for(int i:s)
        t = max(t, i);
    for(int i:s)
        q += (i==t);
    cout << q << endl;
    return ;
    cout << " " << endl;
}

signed main()
{
    int T;
    cin >> T;
    while(T--)
    {
            solve();
    }
}
