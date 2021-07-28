#include<iostream>
using namespace std;
int main()
{
    long long int q, l,r,k, i,num, c,d,e;
    cin>>q;
    while(q--)
    {
        e=0;
        cin>>l;
        cin>>r;
        cin>>k;
        for(i=l;i<=r;i++)
        {
            c=0;
            d=0;
			num=i;
            while(num>0)
            {
                r = num%10;
                c++;
                if(r%k==0)
                    d++;
                num = num/10;
            }
            if(c==d)
                e++;
        }
        cout<<e<<endl;
		cout<<l<<" "<<r<<" "<<k<<endl;
    }
    return 0;
}
