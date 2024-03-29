#include <iostream>
using namespace std;

void printSpiralOrder(int M, int N, int mat[M][

    ])
{
    int top = 0, bottom = M - 1;
    int left = 0, right = N - 1;

    while (1)
    {
        if (left > right)
            break;
        // print top row
        for (int i = left; i <= right; i++)
            cout << mat[top][i] << " ";
        top++;

        if (top > bottom)
            break;
        // print right column
        for (int i = top; i <= bottom; i++)
            cout << mat[i][right] << " ";
        right--;

        if (left > right)
            break;
        // print bottom row
        for (int i = right; i >= left; i--)
            cout << mat[bottom][i] << " ";
        bottom--;

        if (top > bottom)
            break;
        // print left column
        for (int i = bottom; i >= top; i--)
            cout << mat[i][left] << " ";
        left++;
    }
}

int main()
{
    int M=5,N=5;
    int mat[M][N] =
    {
        { 1,  2,  3,  4, 5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };

    printSpiralOrder(m,n,mat);

    return 0;
}
