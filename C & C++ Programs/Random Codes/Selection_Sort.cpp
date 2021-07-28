#include<iostream>
using namespace std;
int main()
{
    long long int n,i,j,c=0,temp,minimum;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n-1;i++)
    {
        minimum = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minimum])
            {
                minimum = j;
                c++;
            }
        }
        temp = a[minimum];
        a[minimum] = a[i];
        a[i] = temp;
    }

    cout<<c;
    return 0;
}
