#include<bits/stdc++.h>
using namespace std;


/*bool check(string str, int k)
{
    for(int i=0; i<str.length()-1; i++)
        if(abs(str[i]-str[i+1]) != k)
            return false;
    return true;
}

vector<int> numsSameConsecDiff(int n, int k)
{
    int start = pow(10, n-1);
    int end   = pow(10, n);
    vector<int> vec;
    string str="";

    for(int i=start; i<end; i++)
    {
        str = to_string(i);
        if(check(str, k))
            vec.push_back(i);
    }
    return vec;
}*/




vector<int> numsSameConsecDiff(int n, int k)
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i=2;  i<=n; i++)
    {
        vector<int> result;
        for (int i=0; i<nums.size(); i++)
        {
            int y = nums[i] % 10;
            if (y+k < 10)
                result.push_back(nums[i] * 10 + y + k);
            if (k>0 and (y-k)>=0)
                result.push_back(nums[i] * 10 + y - k);
        }
        nums = result;
    }
    return nums;
}

int main()
{
    vector<pair<int, int>> v = {{2,2},{3,3},{4,4},{5,5},{6,6},{7,7},{8,8},{9,9}};
    for(auto i:v)
    {
        vector<int> vec = numsSameConsecDiff(i.first , i.second);
        for(int i:vec)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
