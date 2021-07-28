#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int n,m,i,j=0,p;
    cin>>n>>m;  //where n=size of the array AND m=rotation key
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    m=m%n;

    for(i=m;i<n;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<m;i++)
    {
        b[j]=a[i];
        j++;
    }

    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    //method 1 ends

    int temp;
    while(m--)          //performing a full swapping operation in the array for about m times
    for(i=0;i<n-1;i++)  //loop for swapping values in the array
    {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    //method 2 ends
    //cout<<"\a\a";
    /*
    int x=523,y=500;
    for(i=1;i<=10;i++)
    {
        x = x+150;
        y = y-50;
        Beep(x,y);
    }*/
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1245, 1000);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1175, 1000);
    return 0;
}
