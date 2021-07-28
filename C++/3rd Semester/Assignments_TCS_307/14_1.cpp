#include<iostream>
using namespace std;

int sum(int n)
{
    if(n<=1)
        return n;
    else
        return n + sum(n-1);
}

int main()
{
    int n,s;
    cin>>n;
    s = sum(n);
    cout<<"The sum is : "<<s<<endl;
    return 0;
}
