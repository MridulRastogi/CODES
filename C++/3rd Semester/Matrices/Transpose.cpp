#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	int b[m][n];
	for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            b[j][i] = a[i][j];
	cout<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
	return 0;
}
