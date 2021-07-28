#include<iostream>
using namespace std;
int sumofdigits(long long int n)
{
	long long int r;
	int s=0;
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	return s;
}
int main()
{
	int n,q,s1,s2,c,z,i,j,b;
	cin>>n>>q;
	long long int a[n],r1,r2,num1,num2;

	for(i=0;i<n;i++)
		cin>>a[i];

	while(q--)
	{
		cin>>z;
		if(z<(n-1))
        {
            z=z-1;
            s1=b=0;
            num1 = a[z];
			s1 = sumofdigits(num1);
			for(j=z+1;j<n;j++)
            {
                c=s2=0;
                num2 = a[j];
                if(num1<num2)
                {
			        s2 = sumofdigits(num2);
			        if(s1>s2)
                    {
                        c=b=1;
                        cout<<(z+2)<<endl;
                        break;
                    }
				}
            }
			if(b==0)
				cout<<"-1"<<endl;
		 }

		 else
            cout<<"-1"<<endl;
    }
	return 0;
}
