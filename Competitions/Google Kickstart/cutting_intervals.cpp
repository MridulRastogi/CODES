#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        cin>>n>>c;
        int a[n][2];
        for(i=0;i<n;i++)
            cin>>a[i][0]>>a[i][1];
        int min=10000000, max=0;
        for(i=0;i<n;i++)
        {
            if(a[0][i]>max)
                max = a[0][i];
            if(a[i][0]<min)
                min = a[i][0];
        }
        for(i=0;i<n;i++)
        {
            if(a[i][0]<)
        }

    }
    return 0;
}
