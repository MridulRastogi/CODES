#include<iostream>
using namespace std;
void first(int a[],int l,int r,int m)
{
    for(int i=l;i<=r;i++)
        a[i] = a[i] + m;
}
void second(int a[],int l,int r,int m)
{
    for(int i=l;i<=r;i++)
        a[i] = a[i] * m;
}
int third(int a[],int m,int n)
{
    int i,pos1,pos2;
    for(i=1;i<=n;i++)
        if(a[i]==m)
        {
            pos1=i;
            break;
        }
    for(i=n;i>0;i--)
        if(a[i]==m)
        {
            pos2=i;
            break;
        }
    if(pos1==NULL && pos2==NULL)
        return (-1);
    else
        return (pos2-pos1+1);
}
int main()
{
    int n,q,i;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>q;
    cin.ignore();
    string s;
    int c,l,r,m,pos;
    while(q--)
    {
        getline(cin,s);
        if(s[0]=='1' || s[0]=='2')
            c=s[0]-48;
        else if(s[0]=='3')
            c=s[0]-48;
        if(c==1 || c==2)
        {
            l = s[2]-48;
            r = s[4]-48;
            m = s[6]-48;
        }
        else if(c==3)
        {
            m = s[2]-48;
        }

        if(c==1)
            first(a,l,r,m);
        else if(c==1)
            second(a,l,r,m);
        else if(c==3)
        {
            pos = third(a,m,n);
            cout<<pos<<endl;
        }
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
