#include<iostream>
using namespace std;
int main()
{
    int t,z,i,j,n,c=0;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        cin>>n;
        char s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        cout<<"Case #"<<z<<": 1 ";
        for(i=1;i<n;i++)
        {
            c=1;
            for(j=0;j<i;j++)
            {
                if(s[j]<s[j+1])
                    c++;
                else
                    c=1;
            }
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
2
4
ABBC    1 2 1 2
6
ABACDA  1 2 1 2 3 1
*/
