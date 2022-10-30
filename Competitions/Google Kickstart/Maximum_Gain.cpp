#include<bits/stdc++.h>
using namespace std;
int result(deque<int>& fir, deque<int>& sec, int n, int m, int k)
{
    while(k--)
    {
        
    }
}
int main()
{
    int t, n, m, k, num;
    cin >> t;
    for(int z=1; z<=t; z++)
    {
        deque<int> fir, sec;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> num;
            fir.push_back(num);
        }
        cin >> m;
        for(int i=0; i<m; i++)
        {
            cin >> num;
            sec.push_back(num);
        }
        cin >> k;
        cout << "Case #" << z << ": " << result(fir, sec, n ,m, k) << endl;
    }
    return 0;
}
