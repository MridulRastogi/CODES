#include<iostream>
using namespace std;
int main()
{
    int t,r,c,i,j;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        cin>>r>>c;
        char a[r][c];
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                cin>>a[i][j];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]=='.' || a[i][j]=='#')
                    continue;
                top_left     =   // i-1, j-1
                top          =   // i-1, j
                top_right    =   // i-1, j+1
                left         =   // i  , j-1
                right        =   // i  , j+1
                bottom_left  =   // i+1, j-1
                bottom       =   // i+1, j
                bottom_right =   // i+1, j+1
            }
        }
    }
    return 0;
}
