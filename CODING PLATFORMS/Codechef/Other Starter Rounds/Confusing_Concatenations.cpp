#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void print(vector<int>& vec)
{
    for(int i:vec)
        cout << i << " ";
    cout << endl;
}

void solve()
{
    int n, num, pos=-1;
    cin >> n;
    vector<int> a, b, c;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        c.push_back(num);
    }

    num = c[0];
    a.push_back(num);
    for(int i=1; i<n; i++)
    {
        if(num > c[i])
            a.push_back(c[i]);
        else
        {
            pos = i;
            break;
        }
    }

    if(pos!=-1)
        for(int j=pos; j<n; j++)
            b.push_back(c[j]);

    if(a.size()>0 && b.size()>0)
    {
        cout << a.size() << endl;
        print(a);
        cout << b.size() << endl;
        print(b);
    }
    else
        cout << -1 << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}
