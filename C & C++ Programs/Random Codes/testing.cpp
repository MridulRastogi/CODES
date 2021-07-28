#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,d=0,f=0,temp;
    cin>>n;
    int a[n], b[n];
    // INPUTTING ELEMENTS IN A AND B
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    // SORTING ARRAY B
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        {
            if(b[j] > b[j+1])
            {
                temp   = b[j];
                b[j]   = b[j+1];
                b[j+1] = temp;
            }
        }
    //
    f=0;
    for(i=0;i<n-1;i++)
        if(b[i]!=b[i+1])
            a[f++] = b[i];
    a[f++] = b[n-1];

    // COUNTING SAME PAIR OF NUMBER
    for(i=0;i<f;i++)
    {
        for(j=0;j<n;j++)
            if(a[i]==b[j])
                c++;
        d+=(c/2);
        c=0;
    }
    cout<<d;
    return 0;
}
