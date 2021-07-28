#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,i,pl,z,n,q,p,s,l,r,j,pos,result;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        int count,result;
        cin>>n>>q>>p;
        unsigned __int64 a[n], val;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<=q;i++)
        {
            cin>>pl;
            if(pl==1)
            {
                cin>>pos>>val;
                a[pos] = val;
            }
            else if(p==2)
            {
                cin>>s>>l>>r;
                int sum=0,foun=0,b[n];
                for(j=l-1;j<r;j++)
                {
                    unsigned__int64 compute = pow(a[j],s) - pow((a[j]%p),s);
                    count=0;
                    while(result==0)
                    {
                        result = compute%p;
                        count++;
                    }
                    sum = sum + count;
                    b[foun++] = sum;
                }
            }
        }
        for(i=0;i<foun;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }

    return 0;
}
