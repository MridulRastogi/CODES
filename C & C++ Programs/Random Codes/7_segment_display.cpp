#include<iostream>
using namespace std;
int count(int r)
{
	if(r==0) return 6;
	else if(r==1) return 2;
	else if(r==2) return 5;
	else if(r==3) return 5;
	else if(r==4) return 4;
	else if(r==5) return 5;
	else if(r==6) return 6;
	else if(r==7) return 3;
	else if(r==8) return 7;
	else if(r==9) return 6;
}
int main()
{
	int i,t,nos,n;
	cin>>t;
	string s;
	cin.ignore();
	while(t--)
	{
		nos = 0;
		getline(cin,s);
		for(i=0;i<s.length();i++)
		{
			n = s[i] - '0';
			cout<<n<<" ";
			nos = nos + count(n);
		}
		cout<<nos<<endl;
	}
	return 0;
}
