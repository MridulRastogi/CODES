#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int ar[n],output[n],count[10];
    memset(count,0,sizeof(count));
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
        count[ar[i]]++;
    }
    // now adding the previous index element to the current index element in count
    for(i=1; i<10; i++)
        count[i]+=count[i-1];

    for(i=0; i<10; i++)
        cout<<count[i]<<" ";
        cout<<endl;
    for(i=0; i<n; i++)
    {
        output[count[ar[i]]-1] = ar[i];
        count[ar[i]]--;
    }

    for(i=0; i<n; i++)
        ar[i] = output[i];

    for(i=0; i<10; i++)
        cout<<count[i]<<" ";
        cout<<endl;
    for(i=0; i<n; i++)
        cout<<ar[i]<<" ";
    return 0;
}
/*
7
1 4 1 2 7 5 2
*/
