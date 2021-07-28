#include<iostream>
using namespace std;
int main()
{
    int n,i,j,key;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
