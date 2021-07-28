/*#include<iostream>
using namespace std;
int rec(const int n)
{
    if(n<2)
        return n;
    return rec(n-1) + rec(n-2) + 1;
}

int main()
{
    cout<<rec(4);
    return 0;
}

void fun(void)
{}
int main(void)
{
    fun(10, "print","scan");
    return 0;
}

#include<iostream>
using namespace std;

int x=1;
void mystery1()
{
    static int x=50;
    cout<<x++<<endl;
}
void mystery2()
{
    x*=10;
    cout<<x<<endl;
}
int main()
{
    int x=5;
    {
        int x=7;
    }
    mystery1();
    mystery1();
    mystery2();
}

#include<iostream>
using namespace std;
int main()
{
    int
     n = e9;
    cout<<n;
    return 0;
}


#include<iostream>
using namespace std;

int numberOfWays(int x)
{
	// Base condition
	if (x==0 || x==1)
		return 1;

	// A participant can choose to consider
	// (1) Remains single. Number of people
	//	 reduce to (x-1)
	// (2) Pairs with one of the (x-1) others.
	//	 For every pairing, number of people
	//	 reduce to (x-2).
	else
		return numberOfWays(x-1) +
			(x-1)*numberOfWays(x-2);
}

// Driver code
int main()
{
	for(int x=1;x<=10;x++)
	   cout << x << "  :  " << numberOfWays(x) << endl;
	return 0;
}
*/
#include<iostream>
using namespace std;
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
		if(c>2)
			break;
	}
	return ((c==2)?1:0);
}
int main()
{
	int n,i,j,z,count=0;
	cin>>n;
	int x[n], y[n], d[n];
	for(i=0;i<n;i++)
		cin>>x[i];
	for(i=0;i<n;i++)
		cin>>y[i];
	for(i=0;i<n;i++)
	{
		if(y[i]==0)
			cout<<"0 ";
		else
		{
			for(z=1 ; z<=x[i] ; z++)					// Loop for obtaining prime factors
				if(x[i]%z==0)							// checking if the number is a factor
					if(prime(z)==1)							// checking if the factor is prime
						for(j=i-1 ; j>=(i-y[i]) ; j--)			// checking the ranges
							if(x[j]%z==0)
								count++;
			cout<<count<<" ";
			count = 0;
		}
	}
	return 0;
}
/*

5
7 3 6 3 7
0 1 1 1 4

*/
