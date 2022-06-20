#include<bits/stdc++.h>
using namespace std;
int LongestIncreasingSubsequence(vector<int>& vec)
{
    int n = vec.size();
    int list[n];
    list[0] = 1;
    for(int i=1; i<n; i++)
    {
        list[i] = 1;
        for(int j=0; j<i; j++)
            if(vec[i] > vec[j] and list[i] < list[j]+1)
            {
                cout << vec[j] << " ";
                list[i] = list[j] + 1;
            }
    }
    return *max_element(list, list+n);
}

int main()
{
    int n, num;
    vector<int> vec;
    cout << "Enter the size of the array: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    int res = LongestIncreasingSubsequence(vec);
    cout << endl << "The max size of the Longest Increasing Subsequence is = " << res << endl;
    return 0;
}
/*
8
10 22 9 33 21 50 41 60
*/
