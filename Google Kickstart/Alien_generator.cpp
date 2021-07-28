#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int t,z,g,i,m,c;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        cin>>g;
        for(i=1;i<g;i++)
        {
            m = pow(3,i);
            if(m>g)
            {
                c = i-1;
                break;
            }
        }
        cout<<"Case #"<<z<<": "<<c<<endl;
    }
    return 0;
}
