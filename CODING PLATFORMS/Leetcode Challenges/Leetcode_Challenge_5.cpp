#include<iostream>
using namespace std;
int value(int a[][2],int n,int fix)
{
    int i,max;
    for(i=0;i<n;i++)
        if(a[i][0]==fix)
            max = (a[i][0]*10) + a[i][1];
    return max;
}
int main()
{
    int n,i,j,temp,time;
    cout<<"Enter number of clips : ";
    cin>>n;
    int a[n][2], b[n];
    cout<<"Enter the clip sizes : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
    cout<<"Enter the time segment : ";
    cin>>time;
    for(i=0;i<n;i++)
        b[i] = (a[i][0] * 10) + a[i][1];
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(b[j]>b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;

                temp = a[j][0];
                a[j][0] = a[j+1][0];
                a[j+1][0] = temp;

                temp = a[j][1];
                a[j][1] = a[j+1][1];
                a[j+1][1] = temp;
            }

    if(a[n-1][1]<time)
        cout<<"-1";
    else
    {
        int c=1,fix;
        fix = value(a,n,a[0][0]);
        cout<<fix<<" ";
        while((fix%10)<=time)
        {
            fix = value(a,n,fix%10);
            c++;
        }
        cout<<c;
    }
    return 0;
}
//  0 1 6 8 0 2 5 6 0 4 0 3 6 7 1 3 4 7 1 4 2 5 2 6 3 4 4 5 5 7 6 9
