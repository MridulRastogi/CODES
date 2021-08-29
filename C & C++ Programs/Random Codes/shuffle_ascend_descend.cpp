#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp,fe;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];

	fe = (n%2==1) ? (n-1)/2 : n/2;

	//SORTING FIRST HALF
	for(i=0 ; i<fe-1 ; i++)
	{
		for(j=0 ; j<fe-i-1 ; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	//SORTING SECOND HALF
	for(i=fe ; i<n-1 ; i++)
	{
		for(j=fe ; j<n-i-1 ; j++)
		{
			if(a[j]<a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}
/*
7
6 3 9 7 4 9 0
*/
