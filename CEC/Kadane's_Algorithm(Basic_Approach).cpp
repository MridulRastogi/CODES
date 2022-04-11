#include<bits/stdc++.h>
const int INT_MIN = -1e9;
int maximumSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    int i, j, currSum;


    for(i=0; i<=(n-1); i++)
    {
        currSum = 0;
        for (j=i; j<=(n-1); j++)
        {
            currSum = currSum + arr[j];
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
    }
    return maxSum;
}

int main()
{
   int a[] = {1, 3, 8, -2, 6, -8, 5};
   printf("%d", maximumSubarraySum(a, 7));
   return 0;
}
