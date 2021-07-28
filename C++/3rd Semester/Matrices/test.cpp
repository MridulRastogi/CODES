#include <iostream>
using namespace std;

void PRINT(int M, int N, int a[M][])
{
    int r1 = 0, r2 = M - 1;
    int c1 = 0, c2 = N - 1;

    while (1)
    {
        if (c1 > c2)
            break;

        for (int i = c1; i <= c2; i++)
            cout << a[r1][i] << " ";
        r1++;

        if (r1 > r2)
            break;

        for (int i = r1; i <= r2; i++)
            cout << a[i][c2] << " ";
        c2--;

        if (c1 > c2)
            break;

        for (int i = c2; i >= c1; i--)
            cout << a[r2][i] << " ";
        r2--;

        if (r1 > r2)
            break;

        for (int i = r2; i >= r1; i--)
            cout << a[i][c1] << " ";
        c1++;
    }
}

int main()
{
    int m,n,i,j;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    PRINT(m,n,a);
    return 0;
}
