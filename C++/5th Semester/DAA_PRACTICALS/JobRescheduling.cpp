#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Job
{
    int start, finish, profit;
};

bool jobComparataor(Job s1, Job s2)
{
    return (s1.finish < s2.finish);
}

int latestNonConflict(Job arr[], int i)
{
    for (int j=i-1; j>=0; j--)
        if (arr[j].finish <= arr[i-1].start)
            return j;
    return -1;
}

int findMaxProfitRec(Job arr[], int n)
{
    if (n == 1)
        return arr[n-1].profit;
    int inclProf = arr[n-1].profit;
    int i = latestNonConflict(arr, n);
    if (i != -1)
      inclProf += findMaxProfitRec(arr, i+1);
    int exclProf = findMaxProfitRec(arr, n-1);
    return max(inclProf,  exclProf);
}

int findMaxProfit(Job arr[], int n)
{
    sort(arr, arr+n, jobComparataor);
    return findMaxProfitRec(arr, n);
}

int main()
{
	int i,j,temp;
    Job arr[] = {{1, 3, 20}, {2, 5, 20}, {3, 10, 100}, {4, 6, 70}, {6, 9, 60}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The optimal profit is " << findMaxProfit(arr, n);
	return 0;
}
