#include<iostream>
#include<math.h>
using namespace std;
int check(string s, int pos)
{
    int dist=0, c=0, l=s.length();
    while(dist==0)
    {
        if( ((pos-c)>=0 && s[pos-c]=='1') || ((pos+c)<l && s[pos+c]=='1') )
            dist = dist + c;
        c++;
    }
    return dist;
}
int main()
{
    int t, l, z, i;
    cin>>t;
    for(z=1; z<=t; z++)
    {
        string s;
        int n, dist=0;
        cin >> n;
        cin >> s;
        l = s.length();
        for(i=0; i<l; i++)
            if(s[i]=='0')
                dist = dist + check(s,i);
        cout << "Case #" << z << ": " << dist << endl;
    }
    return 0;
}
/*
2
3
111
6
100100
012345
*/
