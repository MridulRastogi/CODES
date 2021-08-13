#include<iostream>
using namespace std;
void print(int a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n=6,i,j,key,comp=0,shifts=0;
    //cout<<"Enter the size of the array : ";
    //cin>>n;
    int a[n]={5,6,3,8,9,7};
    print(a,n);
    cout<<endl;
    //cout<<"Enter the elements : ";
//    for(i=0;i<n;i++)
//        cin>>a[i];
//INSERTION SORT BEGINS
    for(i=1;i<n;i++)
    {
        cout<<"I = "<<i<<endl;
        key = a[i];
        j = i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
        print(a,n);
        cout<<endl;
    }
//INSERTION SORT ENDS
    cout<<"Sorted Array: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
