#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    bool flag = false;
    vector<int> indicies;
    if(nums.size()==2)
    {
        indicies.push_back(0);
        indicies.push_back(1);
    }
    else
    {
        for(int i:nums)
        {
            for(int j:nums)
            {
                int posi = find(nums.begin(),nums.end(),i) - nums.begin();
                int posj = find(nums.begin(),nums.end(),j) - nums.begin();
                //cout<<posi<<" "<<posj<<endl;
                if(posi!=posj && (i+j)==target && flag==false)
                {
                    cout<<"POSITIONS: "<<posi<<" "<<posj<<endl<<"   VALUES: "<<i<<" "<<j<<endl;
                    indicies.push_back(posi);
                    indicies.push_back(posj);
                    flag = true;
                    break;
                }
            }
            if(flag==true)
                break;
        }
    }
    return indicies;
}

int main()
{
    int t,i,n,num,target;
    cout<<"Test Cases: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the number of elements: ";
        cin>>n;
        vector<int> nums;
        for(i=0;i<n;i++)
        {
            cin>>num;
            nums.push_back(num);
        }
        cout<<"   TARGET: ";
        cin>>target;
        vector<int> ans = twoSum(nums, target);
        cout<<"   ANSWER: ";
        for(int j:ans)
            cout<<j<<" ";
        cout<<endl<<endl;
    }
    return 0;
}

/*
3

4
2 7 11 15
9

3
3 2 4
6

3
3 2 3
6

2
3 3
6
*/
