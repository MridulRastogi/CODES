#include<iostream>
using namespace std;
void sort(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
}
int freq(int a[],int n)
{
	int i,c=0;
	for(i=0;i<n;i++)
		if(a[i]!=0)
			c=1;
	return c;
}
int nz(int a[], int n)
{
	int i,c=0;
	for(i=0;i<n;i++)
		if(a[i]!=0)
			c++;
	return c;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,n,c=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,n);
		int num = n;
		while(a[n-1]==num && c==0)
		{
			for(i=0;i<n;i++)
				if(a[i]==num)
					a[i]=0;
			sort(a,n);
			if(freq(a,n)==0)  //all elements are zero
				c=1;
			else
				num = nz(a,n);
		}
		if(c==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
/*
1
6
1 3 3 6 6 6
number of elements remaining = element existing in the array
*/
