#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {0,0,0,1,1,2,2,2,2,3,3,4};
    for(auto it=nums.begin(); it!=nums.end()-1; it++)
    {
        //cout << *it << " ";
        if(*it == *(it+1))
            nums.erase(it+1);
    }
    for(auto it=nums.begin(); it!=nums.end()-1; it++)
    {
        // cout << *it << " ";
        if(*it == *(it+1))
            nums.erase(it+1);
    }
    cout<<"Updated: ";
    for(int i:nums)
        cout << i << " ";
    return 0;
}
