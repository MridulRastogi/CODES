#include<iostream>
#include<cmath>
using namespace std;
int prime(int n)
{
   int i,c=0;
   for(i=2;i<n;i++)
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
    int n,m;
    cout<<"Enter first number : ";
    cin>>n;
    cout<<"Enter second number : ";
    cin>>m;
    if(abs(n-m)==2 && prime(n)==1 && prime(m)==1)
        cout<<"Twin Prime";
    else
        cout<<"Not Twin Prime";
    return 0;
}
