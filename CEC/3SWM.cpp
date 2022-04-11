#include<bits/stdc++.h>
using namespace std;

int threeSumMulti(vector<int>& arr, int target)
{
    int s=0;
    map<int, int> m;
    for(int i: arr)
        m[i] = (m.find(i)==m.end() ? 1 : m[i]+1);
    for(int i=0; i<arr.size(); i++)
        for(int j=i; j<arr.size(); j++)
            for(int k=j; k<arr.size(); k++)
                if(i<j and j<k)
                    if((arr[i]+arr[j]+arr[k])==target)
                        s++;
    return s;
}

int main()
{
    int n, num;
    cin >> n;
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    num = threeSumMulti(vec, 8);
    cout << num;
    return 0;
}
/*
10
1 1 2 2 3 3 4 4 5 5
*/
