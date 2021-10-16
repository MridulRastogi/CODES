#include<iostream>
using namespace std;
bool search(string s, int n)
{
    for(int i=0; i<n;i++)
        if(s[i]=='D')
            return true;
    return false;
}
int main()
{
    int t,n,d,c,m,z,i;
    cin>>t;
    for(z=1; z<=t; z++)
    {
        bool flag = true;
        string s;
        cin>>n>>d>>c>>m;
        cin>>s;
        if(search(s,n)==false)
            flag = true;
        else
        {
            for(i=0; i<n; i++)
            {
                if(s[i]=='D')
                {
                    if(d>0)
                    {
                        d--;
                        c=c+m;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if(s[i]=='C')
                {
                    if(c>0)
                        c--;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag==false)
            cout<<"Case #"<<z<<": NO"<<endl;
        else
            cout<<"Case #"<<z<<": YES"<<endl;
    }
    return 0;
}
/*
5
6 10 4 0
CCDCDD
4 1 2 0
CCCC
4 2 1 0
DCCD
12 4 2 2
CDCCCDCCDCDC
8 2 1 3
DCCCCCDC
*/
