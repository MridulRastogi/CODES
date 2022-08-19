#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "mononom", t = "mon";
    map<char, int> str, ptr;
    for(char c:s)
    {
        if(str.find(c) == str.end())
            str[c] = 1;
        else
            str[c]++;
    }
    for(char c:t)
    {
        if(ptr.find(c) == ptr.end())
            ptr[c] = 1;
        else
            ptr[c]++;
    }
    vector<int> vec;
    for(auto it : ptr)
    {
        if(str.find(it.first) != str.end())
        {
            auto itr = str.find(it.first);
            vec.push_back(itr->second/it.second);
        }
        else
            return 0;
    }
    sort(vec.begin(), vec.end());
    cout << vec[0];
    return 0;
}
