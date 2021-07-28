#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    int n,c,st,d,e,i,j,k,stf,ste,ef,el,l;
    string s,start,end,str;
    for(k=1;k<=t;k++)
    {
        getline(cin,s);
        l = s.length();
        c=st=d=e=0;
        start = s.substr(0,4);
        end = s.substr(l-4,l);
        if(start=="KICK")
            st++;
        if(end=="START")
            e++;
        for(i=0;i<l-4;i++)
        {
            start = s.substr(i,i+4);
            if(str=="KICK")
            {
                stf = i;
                ste = i+4;
                d++;
                break;
            }
        }
        for(i=l-1;i>=5;i--)
        {
            end = s.substr(i-4,i);
            if(end=="START")
            {
                ef = i-4;
                el = i;
                e++;
                break;
            }
        }
        if(st==1 && e==1)
        {
            st++;
            d--;
            e--;
            st = st+d+e;
        }
        cout<<"Case #"<<k<<": "<<st<<endl;
    }
    return 0;
}
