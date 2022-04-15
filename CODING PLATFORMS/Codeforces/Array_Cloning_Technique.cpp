#include<bits/stdc++.h>
using namespace std;
long long getResult(vector<long long>& vec, long long n)
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        bool flag = true;
        long long i,maxi = INT_MIN, ele, copy=0;
        map<long long, long long> m;

        for(i=0; i<n-1; i++)
            if(vec[i]!=vec[i+1])
                flag = false;
        if(flag == true)
            return 0;

        for(i=0; i<n; i++)
        {
            if(m.find(vec[i])==m.end())
                m[vec[i]] = 1;
            else
                m[vec[i]]++;
        }
        for(auto i:m)
        {
            if(maxi < i.second)
            {
                ele = i.first;
                maxi = i.second;
            }
        }
        ele = maxi;
        flag = true;
        for(i=0; i<n; i++)
        {
            if(flag == true)
            {
                copy++;
                if(maxi+maxi <= n)
                    maxi += maxi;
                else
                    maxi += (n-maxi);
                if(maxi==n)
                    flag = false;
            }
        }
        return (maxi+copy-ele);
    }
}
int main()
{
    long long t, num, n;
    vector<long long> result;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<long long> vec;
        for(long long i=0; i<n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        cout << getResult(vec, n) << endl;
    }
    return 0;
}
