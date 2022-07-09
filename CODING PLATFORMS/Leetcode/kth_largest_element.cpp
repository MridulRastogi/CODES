#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k)
{
    for(int i:nums)
        cout << i << " ";
    cout << endl;
    if(nums.size()==1)
        return nums[0];
    vector<int> vec;
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size()-1; i++)
    {
        if(nums[i]!=nums[i+1])
            vec.push_back(nums[i]);
    }
    if(nums[nums.size()-1] != nums[nums.size()-2])
        vec.push_back(nums[nums.size()-1]);
    for(int i:vec)
        cout << i << " ";
    cout << endl;
    return vec[vec.size()-k];
}

int main()
{
    vector<int> vec1 = {3,2,1,5,6,4};
    vector<int> vec2 = {3,2,3,1,2,4,5,5,6};
    cout << findKthLargest(vec1, 2) << endl;
    cout << findKthLargest(vec2, 4) << endl;
    return 0;
}

//1 2 3 4 5 6
