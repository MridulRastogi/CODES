#include<iostream>
#include<cmath>
using namespace std;
//unsigned long long int partition (unsigned long long int A[],unsigned long long int start,unsigned long long  int end)
//{
//    unsigned long long int i = start+1, piv = A[start], j, temp;
//    for(j=start+1 ; j<=end ; j++)
//    {
//        if(A[j] < piv)
//        {
//            temp = A[i];
//            A[i] = A[j];
//            A[j] = temp;
//            i++;
//        }
//    }
//        temp = A[start];
//    A[start] = A[i-1];
//      A[i-1] = temp;
//   return i-1;
//}
//
//void quick_sort(unsigned long long int A[],unsigned long long int start,unsigned long long int end)
//{
//    if(start<end)
//    {
//        unsigned long long int piv_pos = partition (A, start, end);
//        quick_sort (A, start     , piv_pos -1);
//        quick_sort (A, piv_pos +1, end       );
//    }
//}
////sorting done
int main()
{
	unsigned long long int t,n,i,j,temp,h1,h2,c=0,d=0;
	cin>>t;
	while(t--)
	{
	    c=0;
	    d=0;
		cin>>n;

		unsigned long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];

        for(i=0;i<n-1;i++)
			for(j=0;j<n-i-1;j++)
				if(a[j]<a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}

		unsigned long long int b[n];

		for(i=0;i<n;i++)      //removed duplicate elements
		{
			if(a[i]!=a[i+1])
			{
			    b[c]=a[i];
				c++;
            }
		}

		unsigned long long int f[c];      //for frequency

		for(i=0;i<c;i++)    //counting frequency
        {
            d=0;
            for(j=0;j<n;j++)
            {
                if(b[i]==a[j])
                    d++;
            }
            f[i]=d;
        }

        for(i=0;i<c-1;i++)
            for(j=0;j<c-i-1;j++)
                if(f[j]<f[j+1])
                {
                    temp    = f[j];
                    f[j]   = f[j+1];
                    f[j+1] = temp;
                    temp    = b[j];
                    b[j]    = b[j+1];
                    b[j+1]  = temp;
                }

        h1 = f[0];
        h2 = f[c-1];
        if(h1==h2)
            cout<<"1"<<endl;
        else
            cout<<(h1-h2)<<endl;
	}
	return 0;
}
