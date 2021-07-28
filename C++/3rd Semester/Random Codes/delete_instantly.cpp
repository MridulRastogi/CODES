#include<iostream>
using namespace std;
int main()
{
	int t,n,k,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n],b[n],c=0,temp,d=0,s=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n-1;i++)
			for(j=0;j<n-i-1;j++)
				if(a[j]<a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
		for(i=0;i<n-1;i++)
			if(a[i]!=a[i+1])
			{
				b[c] = a[i];
				c++;
			}
		if(a[n-2]!=a[n-1])
		{
			b[c] = a[n-1];
			c++;
		}
		for(i=0;i<c;i++)
		{
			if(d==k)
				break;
			else
			{
				s=s+b[i];
				d++;
			}
		}
		cout<<s<<" "<<endl;
		for(i=0;i<c;i++)
			cout<<b[i]<<" ";
	}
	return 0;
}
/*
1
10 5
8 5 2 8 7 7 7 4 6 5
*/
