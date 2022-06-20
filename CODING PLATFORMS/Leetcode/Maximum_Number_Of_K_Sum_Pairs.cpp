#include<bits/stdc++.h>
using namespace std;

int maxOperations(vector<int>& nums, int k)
{
    int i=0, j=nums.size()-1, c=0;
    sort(nums.begin(), nums.end());
    while(i<j)
    {
        if(nums[i]+nums[j]<k)
        {
            i++;
            continue;
        }
        if(nums[i]+nums[j]==k)
        {
            c++;
            i++;
            j--;
            continue;
        }
        if(nums[i]+nums[j]>k)
        {
            j--;
            continue;
        }
    }
    return c;
}

int main()
{
    int num,n,k;
    vector<int> vec;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    cin >> k;
    cout << maxOperations(vec, k);
    return 0;
}
