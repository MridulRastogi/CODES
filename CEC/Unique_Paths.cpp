#include<bits/stdc++.h>
using namespace std;
/*
int solve(int m, int n, int i, int j)
{

}
*/
int main()
{
    int m=2, n=3, i, j;
    int ar[m][n];
    for(i=1; i<m; i++)
    {
        ar[i][0] = 1;
    }
    for(j=1; j<n; j++)
    {
        ar[0][j] = 1;
    }
    for(i=1; i<m; i++)
    {
        for(j=1; j<n; j++)
        {
            ar[i][j] = ar[i-1][j] + ar[i][j-1];
        }
    }
    cout<<ar[i-1][j-1];
    return 0;
}
