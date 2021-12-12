#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,i,j,n,hw,vol,max,maxi,maxj;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        max=0;//, vol=0, maxi=0, maxj=0;
        for(i=0;i<n;i++)
            cout<<i<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0 ; i<n ; i++)
            for(j=n-1 ; j>=0 ; j--)
                if(i!=j)
                {
                    hw = min(a[i],a[j]);
                    vol = hw * abs(i-j);
                    if(vol>max)
                    {
                        max = vol;
                        maxi = i;
                        maxj = j;
                    }
                }
        cout<<max<<" UNITS between "<<maxi<<" & "<<maxj<<endl<<endl;
    }
    return 0;
}
/*
1
10
8 5 2 8 7 7 7 4 6 5
*/
