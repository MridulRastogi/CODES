#include<iostream>
using namespace std;
int main()
{
    int n,num,r,s=0,p=1;
    cout<<"Enter a number : ";
    cin>>n;
    num = n;
    while(num>0)
    {
        r=num%10;
        s=s+r;
        p=p*r;
        num=num/10;
    }
    if((s+p)==n)
        cout<<"Special Number";
    else
        cout<<"Not a Special Number";
    return 0;
}
