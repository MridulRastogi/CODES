#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=3, n=3,i,j;
    int ar[m][n] = {1,3,1,1,5,1,4,2,1}, dp[m][n];

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            dp[i][j] = 0;

    for(i=1; i<m; i++)
        dp[i][0] = dp[i-1][0] + ar[i][0];

    for(i=1; i<n; i++)
        dp[0][i] = dp[0][i-1] + ar[0][i];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    cout << endl    << "Least Distance: " << dp[m-1][n-1] << endl;
    return 0;
}
