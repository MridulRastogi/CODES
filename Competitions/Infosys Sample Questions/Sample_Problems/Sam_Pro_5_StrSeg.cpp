#include<bits/stdc++.h>
using namespace std;

int result(string s)
{
    map<char, int> m;
    int maxi = INT_MIN, mini = INT_MAX, c=0, d=0;
    for(int i=0; i<s.length(); i++)
    {
        if(m.find(s[i]) == m.end())
            m[s[i]] = 1;
        else
            m[s[i]]++;
    }

    for(auto i:m)
        cout << i.first << " -> " << i.second << endl;
    int nop=0;
    for(int i=0; i<m.size(); i++)
    {
        if(m[s[i]] > 0)
            m[s[i]]--;
        else
        {
            nop = i;
            for(int j=0; j<m.size(); j++)
            {
                if(m[s[i]]%nop==0 || m[s[i]]==0)
                    continue;
                else
                    return 1;
            }
        }
    }
    return nop;
}

int main()
{
    int t;
    string s;
    cin >> t;

    while(t--)
    {
        cout << "Enter a string: ";
        cin >> s;
        cout << result(s) << endl;
    }

    return 0;
}

/*
abccdcabacda

*/
