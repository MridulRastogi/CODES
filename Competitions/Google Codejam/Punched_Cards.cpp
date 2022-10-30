#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,c;
    cin >> t;
    for(int z=1; z<=t; z++)
    {
        cin >> r >> c;
        r = (r*2) + 1;
        c = (c*2) + 1;
        char ar[r][c];

        //filling rest of the array
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                if(ar[i][j]!='+' || ar[i][j]!='-' || ar[i][j]!='.')
                {
                    if(i%2==0)
                        ar[i][j] = (j%2==0 ? '+' : '-');
                    else if(i%2==1)
                        ar[i][j] = (j%2==0 ? '|' : '.');
                }

        //filling out first four positions
        ar[0][0] = '.';
        ar[0][1] = '.';
        ar[1][0] = '.';
        ar[1][1] = '.';

        cout<<"Case #"<<z<<":\n";
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
                cout << ar[i][j];
            cout << endl;
        }
    }
    return 0;
}
