#include<iostream>
using namespace std;
int bs(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return bs(n-1) + bs(n-2)*(n-1);
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<bs(n)<<endl;
	}
	return 0;
}
