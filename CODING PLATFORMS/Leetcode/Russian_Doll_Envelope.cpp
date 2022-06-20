int maxEnvelopes(vector<vector<int>>& E)
{
    sort(E.begin(), E.end(), [](vector<int>& a, vector<int>& b)
         -> bool {return a[0] == b[0] ? b[1] < a[1] : a[0] < b[0];});
    vector<int> dp;
    for (auto& env : E) {
        int height = env[1];
        int left = lower_bound(dp.begin(), dp.end(), height) - dp.begin();
        if (left == dp.size()) dp.push_back(height);
        dp[left] = height;
    }
    return dp.size();
}

    int maxEnvelopes(vector<vector<int>>& nums)
        {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            int list[n];
            list[0] = 1;
            for(int i=1; i<n; i++)
            {
                list[i] = 1;
                for(int j=0; j<i; j++)
                {
                    int pre_w = nums[i][0], pre_h = nums[i][1];
                    int suc_w = nums[j][0], suc_h = nums[j][1];
                    if(pre_w>suc_w and pre_h>suc_h and list[i]<(list[j]+1))
                    {
                        list[i] = list[j] + 1;
                    }
                }
            }
            return *max_element(list, list+n);
        }
