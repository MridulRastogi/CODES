#include<iostream>
using namespace std;
/*void print(int n,int m,int a[n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
}*/
int main()
{
    int n,m,s,i,j;
    cin>>n>>m>>s;

    int a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    //print(n,m,a);
    return 0;
}
