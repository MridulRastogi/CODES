#include<bits/stdc++.h>
using namespace std;
int result(vector<int>& vec)
{
    vector<int> res = vec;
    sort(vec.begin(), vec.end());
    if(res==vec)
        return (n-1);
    else
    {
        
    }
}
int main()
{
    int n, num;
    vector<int> vec;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    cout << result(vec);
    return 0;
}
