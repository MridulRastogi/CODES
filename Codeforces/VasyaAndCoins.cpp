#include<bits/stdc++.h>
using namespace std;
int check(long int a, long int b)
{
    if(a==0 && b==0)
        return 1;
    if(a>=1 && b==0)
        return (a+1);
    if(a==0 && b>=1)
        return 1;
    long int num = (a*1)+(b*2)+1;
    return num; 
}
int main()
{
    int t;
    long int a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << check(a,b) << endl;
    }
    return 0;
}
