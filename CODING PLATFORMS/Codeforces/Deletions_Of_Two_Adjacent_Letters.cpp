#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    char ch;
    bool flag = false;
    cin >> t;
    while(t--)
    {
        cin >> s >> ch;
        vector<pair<int,int>> pr;
        int l = s.length();
        for(int i=0; i<l; i++)
            if(s[i]==ch)
                pr.push_back(make_pair(i, l-i-1));
        flag = false;
        for(auto j:pr)
        {
            if(j.first%2==0 && j.second%2==0)
            {
                flag = true;
                break;
            }
        }
        if(flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" <<endl;
    }
    return 0;
}
