#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
using namespace std;
int main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n+5], k, sum=0;
		for(i=0; i<n; i++)
			cin >> a[i];
		i=0;
		while(i<n)
		{
			j=i;
			while(j<n && j==a[j])
				j++;
			if(j==n)
				break;
			sum++;
			while(j!=a[j])
			{
				k = a[a[j]];
				a[a[j]] = a[j];
				a[j] = k;
				sum++;
			}
			sum++;
			i++;
		}
		cout << sum << endl;
	}
	return 0;
}
