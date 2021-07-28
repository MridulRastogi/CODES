#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
}
int main()
{
    int n,i,j,c=0,d,temp;
    bool flag = true;
    cout<<"Enter size : ";
    cin>>n;
    int a[n],b[n],e[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    //sorting initial array
    sort(a,n);

    //creating an array with no duplicate elements
    for(i=0;i<n;i++)
        if(a[i]!=a[i+1])
            b[c++]=a[i];

    //counting frequency
    for(i=0;i<c;i++)
    {
        d=0;
        for(j=0;j<n;j++)
            if(b[i]==a[j])
                 d++;
        e[i] = d;
    }

    //sorting frequency array
    sort(e,c);

    //checking if no two elements have matching frequency
    for(i=0;i<c-1;i++)
        if(e[i]==e[i+1])
            flag = false;

    cout<< ((flag==true) ? "True" : "False") <<endl;

    return 0;

}
// -3 0 1 -3 1 1 1 -3 10 0
