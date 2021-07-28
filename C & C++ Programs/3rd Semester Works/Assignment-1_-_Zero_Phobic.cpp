#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int check_zero(int n)
{
    stringstream s;
    s<<n;
    int c=0;
    string num = s.str();
    for(int i=0;i<num.length();i++)
        if(num[i]=='0')
            c++;
    return c;
}
int main()
{
    int i;
    for(i=100;i<=200;i++)
    {
        if(check_zero(i)==0)
            cout<<i<<" ";
    }
    return 0;
}
