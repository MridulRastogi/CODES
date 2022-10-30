#include<iostream>
using namespace std;
int main()
{
    long int t,g,i,z,j,s,c=0;
    bool flag;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        c=1;
        cin>>g;
        for(i=1;i<g;i++)
        {
            s=0;
            for(j=i;i<=g;j++)
            {
                flag = false;
                s=s+j;
                if(s>g)
                    break;
                else if(s==g)
                {
                    cout<<i<<",";
                    flag = true;
                    c++;
                    break;
                }
            }
        }
        cout<<"Case #"<<z<<": "<<c<<endl;
    }
    return 0;
}
