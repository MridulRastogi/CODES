#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,n,num;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> vec;
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        bool flag;
        for(int i=1; i<n; i++)
        {
            if(vec[i]==0 && vec[i-1]==1)
            {
                flag = false;
                for(int j=i+1; j<n; j++)
                {
                    if(vec[j]==1 && flag==false)
                    {
                        v.push_back(make_pair(i-1,j));
                        flag = true;
                    }
                }
            }
        }
        s=0;
        for(auto i:v)
            s += (i.second-i.first);
        cout << s << endl;
    }
    return 0;
}
