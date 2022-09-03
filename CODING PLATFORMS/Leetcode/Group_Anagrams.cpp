#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
    vector<vector<string>> res;
    vector<string> v, st = strs;

    for(int i=0; i<st.size(); i++)
    {
        string s = st[i];
        sort(s.begin(), s.end());
        st[i] = s;
    }

    int len = st.size(), minimum;
    for(int i=0; i<len-1; i++)
    {
        minimum = i;
        for(int j=i+1; j<len; j++)
            if(st[j] < st[minimum])
                minimum = j;
        swap(  st[i],   st[minimum]);
        swap(strs[i], strs[minimum]);
    }

    v.push_back(strs[0]);
    for(int i=0; i<len-1; i++)
    {
        if(st[i]==st[i+1])
        {
            v.push_back(strs[i+1]);
        }
        else
        {
            res.push_back(v);
            v.clear();
            v.push_back(strs[i+1]);
        }
    }
    res.push_back(v);

    for(string s : strs)
        cout << "'" << s << "'" << " ";
    cout << endl;
    for(string s : st)
        cout << "'" << s << "'" << " ";
    cout << endl;

    return res;
}

int main()
{
    vector<string> vec = {"eat","tea","tan","ate","nat","bat"};
    //vector<string> vec = {"","b",""};
    vector<vector<string>> v = groupAnagrams(vec);
    for(int i=0; i<v.size(); i++)
    {
        cout << "[ ";
        for(int j=0; j<v[i].size(); j++)
        {
            cout << "'" << v[i][j] << "'" << " ";
        }
        cout << "] ";
    }
    return 0;
}
