#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,sum;
	cin>>t;
	while(t--)
	{
		int x,y,n,mod;
		sum=0;
		cin >> x >> y >> n >> mod;
		int a[n];
		a[0] = x;
		a[1] = y;
		for(i=2; i<n; i++)
			a[i] = (a[i-1]+a[i-2])%mod;
		map<int, int> m;
		for(i=0; i<n; i++)
			m[a[i]]++;
		for(auto it=m.begin(); it!=m.end(); it++)
			sum = sum + (it->second * it->second);
		cout<<sum<<endl;
	}
	return 0;
}
