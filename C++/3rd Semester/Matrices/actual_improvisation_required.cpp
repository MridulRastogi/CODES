#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k,c=0;
	int a[n][m],b[n*m];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	k = n*m;
	int r1=0, c1=0, r2=n-1, c2=m-1;
	while(k!=0)
	{
		for(i=r1;i<=r2;i++)
			for(j=c1;j<=c2;j++)
			{
				b[c++] = a[i][j];
				k--;
			}
		for(i=r1;i<=r2;i++)
			for(j=c2;j<=c2;j++)
			{
				b[c++] = a[i][j];
				k--;
			}
		for(i=r2;i<r2;i++)
			for(j=c2;j>=c1;j--)
			{
				b[c++] = a[i][j];
				k--;
			}
		for(i=r2;i>=r1;i--)
			for(j=c1;j<=c1;j++)
			{
				b[c++] = a[i][j];
				k--;
			}
		r1++; c1++; r2--; c2--;
	}
	for(i=(n*m)-1;i>=0;i--)
		cout<<b[i]<<" ";
	return 0;
}
