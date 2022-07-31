#include<bits/stdc++.h>
using namespace std;
int result_for(int ar[], int start, int end)
{
    int damage = 0;
    for(int i=start; i<end; i++)
        damage += (ar[i]<ar[i+1] ? 0 : ((ar[i] - ar[i+1])));
    return damage;
}
int result_back(int ar[], int start, int end)
{
    int damage = 0;
    for(int i=start; i>end; i--)
        damage += (ar[i]<ar[i-1] ? 0 : (ar[i]-ar[i-1]));
    return damage;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n+1], dist[m][2];
    for(int i=1; i<=n; i++)
        cin >> ar[i];
    for(int i=0; i<m; i++)
    {
        cin >> dist[i][0] >> dist[i][1];
        if(dist[i][0] < dist[i][1])
            cout << result_for(ar, dist[i][0], dist[i][1]) << endl;
        else if(dist[i][0] > dist[i][1])
            cout << result_back(ar, dist[i][0], dist[i][1]) << endl;
    }
    return 0;
}
