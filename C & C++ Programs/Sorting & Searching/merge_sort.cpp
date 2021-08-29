#include<iostream>
using namespace std;

void merge(int A[ ] , int start, int mid, int end)
{
    //stores the starting position of both parts in temporary variables.
    int i,p,q;
    p = start ,q = mid+1;
    int Arr[end-start+1] , k=0;
    for(i = start; i<=end; i++)
    {
        if(p > mid)      //checks if first part comes to an end or not .
            Arr[ k++ ] = A[ q++] ;
        else if ( q > end)   //checks if second part comes to an end or not
            Arr[k++] = A[p++];
        else if(A[p] < A[q])     //checks which part has smaller element.
            Arr[ k++ ] = A[ p++ ];
        else
            Arr[ k++ ] = A[ q++];
    }
    for (p=0; p<k; p++)
        A[start++] = Arr[p];
        /* Now the real array has elements in sorted manner including both parts.*/
}

void merge_sort (int A[], int start, int end)
{
    if(start<end)
    {
        int mid;
        mid = (start + end)/2 ;        // defines the current array in 2 parts .
        merge_sort (A, start , mid);   // sort the 1st part of array .
        merge_sort (A, mid+1 , end);   // sort the 2nd part of array.
        merge(A,start , mid , end );   // merge the both parts by comparing elements of both the parts.
   }
}

int main()
{
    int t,i,n;
    cout << "Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the size of the array: ";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        merge_sort(a,0,n-1);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
