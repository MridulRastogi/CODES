#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,i,j,c=0;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
		getline(cin,s[i]);
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<i;j++)
		{
			if(strcmp(s[i],s[j])>0)
				c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
