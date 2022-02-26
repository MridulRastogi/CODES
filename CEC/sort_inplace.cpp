#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums)
{
    for(int j=0; j<nums.size(); j++)
        for(int i=0; i<nums.size()-1; i++)
            if(nums[i]==0)
                swap(nums[i], nums[i+1]);
}

int main()
{
    vector<int> v = {0,1,0,3,12};
    sortColors(v);
    for(int x:v)
        cout<<x<<" ";
    return 0;
}
/*
plus one
nim game
move zeroes
ugly number
*/
