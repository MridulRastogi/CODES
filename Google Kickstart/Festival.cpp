#include<iostream>
using namespace std;

int hapiness_rating(int a[][3], int d, int n, int k)
{
    for(i=0; i<n-1; i++)
    {

    }
}

int main()
{
    int t,z,hr,i,d,n,k;
    cin>>t;
    for(z=1; z<=t; z++)
    {
        cin >> d >> n >> k;
        int a[n][3];
        for(i=0; i<n; i++)
            cin >> a[i][0] >> a[i][1] >> a[i][2];

        bool f[d][n];
        for(i=0; i<d; i++)
            for(j=0; j<d; j++)
                f[i][j] = false;
        for(i=0; i<d; i++)
            for(j=a[i][1]-1; j<a[i][2]; j++)
                f[i][j] = true;

        for(i=0;i<d;i++)
            for(j=0;j<d;j++)

        hr = hapiness_rating(a,d,n,k);
        cout<<"Case #"<<z<<": "<<hr<<endl;
    }
    return 0;
}
