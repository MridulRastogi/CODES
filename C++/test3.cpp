#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& nums)
{
    for(auto i : nums)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    vector<int> nums = {7,0,6,5,4,6,8,7,2,2};
    print(nums);
    sort(nums.begin(), nums.end());
    print(nums);
    sort(nums.begin(), nums.end(), greater<int>());
    print(nums);
    return 0;
}
