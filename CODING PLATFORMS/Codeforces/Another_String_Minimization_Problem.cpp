#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i, first, second, small, large, num;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<int> vec;
        vec.push_back(-1);
        vector<char> ar(m+1, 'B');
        for(i=1; i<=n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        for(int i=1; i<=n; i++)
        {
            first  = vec[i];                               // position through a[i]
            second = m+1-vec[i];                           // position through m+1-a[i]
            small  = first<second ? first  : second;
            large  = first<second ? second : first;
            if(ar[small] == 'B')
                ar[small] = 'A';
            else
                ar[large] = 'A';
        }
        for(int i=1; i<=m; i++)
            cout << ar[i];
        cout << endl;
    }
    return 0;
}
