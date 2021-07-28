#include<iostream>
using namespace std;

bool progression(int a, int b, int c)
{
    if((a-b)==(b-c))
        return true;
    else
        return false;
}
int check_freq(bool b[])
{
    int i,c=0;
    for(i=4;i<8;i++)
        if(b[i]==true)
            c++;
    return c;
}

int main()
{
    int t,z,i,j,n=3;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        int a[n][n],max=0,c=0;
        bool b[8];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(i==1 && j==1)
                    continue;
                else
                    cin>>a[i][j];
            }
        b[0] = progression(a[0][0],a[0][1],a[0][2]);     //tr
        b[1] = progression(a[2][0],a[2][1],a[2][2]);     //br
        b[2] = progression(a[0][0],a[1][0],a[2][0]);     //lc
        b[3] = progression(a[0][2],a[1][2],a[2][2]);     //rc
        for(i=0;i<4;i++)
            if(b[i]==true)
                c++;
        for(i=0;i<50;i++)
        {
            b[4] = progression(a[0][0],i,a[2][2]);     //tld
            b[5] = progression(a[0][2],i,a[2][0]);     //trd
            b[6] = progression(a[1][0],i,a[1][2]);     //mr
            b[7] = progression(a[0][1],i,a[2][1]);     //mc
            int freq = c + check_freq(b);
            if(freq>max)
                max = freq;
            if(freq==8)
                break;
        }
        cout<<"Case #"<<z<<":"<<" "<<max<<endl;
    }
    return 0;
}
