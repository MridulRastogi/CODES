#include<iostream>
using namespace std;
int partition (int A[], int start, int end)
{
    int piv = A[start];            //make the first element as pivot element.
    int i = start+1,  j, temp;
    for(j = start+1 ; j<=end ; j++)
    {
    /*rearrange the array by putting elements which are less than pivot
        on one side and which are greater that on the other side. */
        if(A[j] < piv)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
        }
    }
        temp = A[start];
    A[start] = A[i-1];
      A[i-1] = temp;
   //put the pivot element in its proper place.
    return i-1;                      //return the position of the pivot
}

void quick_sort(int A[ ], int start, int end)
{
    if(start<end)
    {
        //stores the position of pivot element
        int piv_pos = partition (A, start, end);
        quick_sort (A, start     , piv_pos -1);  //sorts the left side of pivot.
        quick_sort (A, piv_pos +1, end       );  //sorts the right side of pivot.
    }
}
int main()
{
    int n,i,t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the size of the array : ";
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        quick_sort(a,0,n-1);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
