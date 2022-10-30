#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& res)
{
    for(int i:res)
        cout << i << " ";
    cout << endl;
}

int sum(vector<int>& vec)
{
    int s = 0;
    for(int i:vec)
        if(i%2==0)
            s+=i;
    return s;
}

vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries)
{
    vector<int> vec;
    int recent, current, value, res = sum(nums);

    for(int i=0; i<queries.size(); i++)
    {
        value                = queries[i][0];
        recent               = nums[queries[i][1]];
        nums[queries[i][1]] += value;
        current              = nums[queries[i][1]];

        if(recent%2 == 0)
        {
            if(current%2 == 0)
            {
                if(recent > current)
                    res -= abs(value);
                else if(recent < current)
                    res += abs(value);
            }
            else if(abs(current)%2 == 1)
                res -= recent;
        }
        else if((abs(recent)%2)==1 and (abs(current)%2)==0)
            res = res + current;
        vec.push_back(res);
}

int main()
{
    vector<int> vec = {-10,2,-4,5,-3,3};
    cout << sum(vec) << endl;
    print(vec);
    cout << endl;
    vector<vector<int>> v = {{-4,2},{9,0},{-8,1},{5,4},{1,4},{9,0}};
    vector<int> res = sumEvenAfterQueries(vec, v);
    cout << endl;
    print(res);
    return 0;
}
