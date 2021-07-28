#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x,y,temp;
    cin>>n;
    int arr[n][n];

    for(i=0 ; i<n ; i++)
        for(j=0 ; j<n ; j++)
            cin>>arr[i][j];

    for(x=0; x<n/2 ; x++)
    {
        for(y=x ; y<n-x-1 ; y++)
        {
                                                            //Store the right value and start the rotation from here
            temp = arr[x][y];
                                                            // Move values from right to top
            arr[x][y] = arr[y][n - 1 - x];
                                                            // Move values from bottom to right
            arr[y][n - 1 -x] = arr[n- 1 - x][n - 1 - y];
                                                            // Move values from left to bottom
            arr[n - 1 - x][n - 1 - y] = arr[n - 1 -y][x];
                                                            // Assign temp to left
            arr[n - 1 - y][x] = temp;
         }
     }

    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*

00 01 02    --->    02 12 22
10 11 12    --->    01 11 21
20 21 22    --->    00 10 20

*/
