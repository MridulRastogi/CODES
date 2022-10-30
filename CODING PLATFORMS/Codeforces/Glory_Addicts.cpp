#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(),x.end()
#define int long int
using namespace std;

void solve()
{
    int n, num_zero, num_one, s=0;
    cin >> n;
    vector<int> skill(n), damage(n), z, o, new_skill, new_damage;

    for(int i=0; i<n; i++)
        cin >> skill[i];

    for(int i=0; i<n; i++)
    {
        cin >> damage[i];
        if(skill[i] == 0)
            z.push_back(damage[i]);
        else
            o.push_back(damage[i]);
    }
    //z.push_back(0);
    //o.push_back(0);

    num_one = o.size();
    num_zero = z.size();
    int zeroes_sum = accumulate(all(z),0);
    int ones_sum = accumulate(all(o),0);

    if(num_zero==n)
    {
        cout << zeroes_sum << endl;
        return;
    }
    if(num_one==n)
    {
        cout << ones_sum << endl;
        return;
    }

    sort(all(z));
    sort(all(o));

    if(num_one == num_zero)
    {
        if(z[0] <= o[0])
        {
            s = z[0];
            for(int i=1; i<z.size(); i++)
                s += (z[i]*2);
            for(int i=0; i<o.size(); i++)
                s += (o[i]*2);
            cout << s << endl;
            return;
        }
        else if(o[0] < z[0])
        {
            s = o[0];
            for(int i=1; i<o.size(); i++)
                s += (o[i]*2);
            for(int i=0; i<z.size(); i++)
                s += (z[i]*2);
            cout << s << endl;
            return;
        }
    }
    else if(num_one < num_zero)
    {

    }
    else if(num_zero < num_one)
    {

    }
}

signed main()
{
    FAST;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
