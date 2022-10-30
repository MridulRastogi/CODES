#include<iostream>
#include<math.h>
using namespace std;
int check(string s, int pos)
{
    int i, position1, position2, min_dis, l;
    l = s.length();
    min_dis   = 10000000;
    position1 = 10000000;
    //position2 = 10000000;
    if(pos!=0)
        for(i=pos; i>=0; i--)
            if(s[i]=='1')
            {
                position1 = abs(pos-i);
                min_dis = position1;
                break;
            }
    if(position1!=1 && pos!=(l-1))
    {
        for(i=pos; i<l; i++)
            if(s[i]=='1')
            {
                position2 = abs(pos-i);
                break;
            }
        min_dis = position1<position2 ? position1 : position2;
    }
    //cout << pos << " : " << position1 << " & " << position2 << endl;
    return min_dis;
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
