#include<iostream>
using namespace std;
int palindrome(int n)
{
    int r,rev=0,num=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(num==rev)
        return 1;
    else
        return 0;
}
int prime(int n)
{
   int i,c=0;
   for(i=2;i<=n/2;i++)
   {
       if(n%i==0)
        c++;
   }
   if(c==0)
        return 1;
    else
        return 0;
}
int main()
{
    int i;
    for(i=10;i<=100;i++)
        if(palindrome(i)==1)
            if(prime(i)==1)
                cout<<i<<" ";
    return 0;
}
