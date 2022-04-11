#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, num;
    cin>>t;
    while(t--)
    {
        string ans = "";
        cin >> n;
        vector<long int> vec;
        for(int i=0; i<n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        sort(vec.begin(), vec.end());
        if(vec.size()==1)
            ans = vec[0]>1 ? "NO" : "YES";
        else
        {
            if(vec[vec.size()-1]-vec[vec.size()-2] > 1)
                ans = "NO";
            else
                ans = "YES";
        }
        cout << ans << endl;
    }
    return 0;
}
