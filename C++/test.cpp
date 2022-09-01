#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r=2, c=5, c2=0, r2=0;
    for(int i=r-1; i>=0; i--)
    {
        int duplicate = i;
        for(int j=0; j<=c2; j++)
        {
            cout << duplicate << "," << j << "  ";
            duplicate++;
        }
        cout << endl;
        c2++;
    }

    cout << endl;

    c2 = 1;
    for(int i=0; i<r; i++)
    {
        int duplicate = 0;
        for(int j=c2; j<c; j++)
        {
            cout << duplicate << "," << j << "  ";
            duplicate++;
        }
        cout << endl;
        r2++;
        c2++;
    }

    return 0;
}
