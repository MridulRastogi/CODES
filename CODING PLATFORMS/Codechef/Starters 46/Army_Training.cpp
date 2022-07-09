#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t, n,num, mid, attack, defense, rating;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> vec;
        for(int i=0; i<n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        sort(vec.begin(), vec.end(), greater<int>());
        mid = n%2==0 ? n/2 : ((n/2)+1);
        attack = 0;
        defense = 0;
        for(int i=0; i<mid; i++)
            attack += vec[i];
        for(int i=mid; i<n; i++)
            defense += (1000-vec[i]);
        rating = attack * defense;
        cout << rating << endl;
    }
    return 0;
}
