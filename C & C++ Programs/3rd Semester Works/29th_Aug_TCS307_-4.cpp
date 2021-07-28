#include<iostream>
using namespace std;
int s=0;
int sum(int n)
{
    if(n==0)
        return s;
    else
        return (n+sum(n-1));
}
int main()
{
    int n;
    cout<<"Enter the limit of n natural numbers : ";
    cin>>n;
    cout<<sum(n);
    return 0;
}
