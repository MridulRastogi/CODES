#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,i,num,temp=INT32_MAX;
	cin>>n>>k;
	int a[n];
	for(i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	for(i=0; i<=n-k; i++)
	{
		num = a[i+k-1] - a[i];
		temp = temp>num ? num : temp;
	}
	cout<<temp;
	return 0;
}
