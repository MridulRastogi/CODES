#include<bits/stdc++.h>
using namespace std;

bool compareLen(const std::string& a, const std::string& b)
{
    return (a.size() < b.size());
}

string commonPrefix(string s1, string s2)
{
    string res="";
    int l1=s1.length();
    int l2=s2.length();
    for(int i=0,j=0 ; i<l1 and j<l2; i++,j++)
    {
        if(s1[i]!=s2[i])
            break;
        res += s1[i];
    }
    return res;
}

string longestCommonPrefix(vector<string> vec)
{
    sort(vec.begin(), vec.end(), compareLen);
    string res = vec[0];
    for(int i=0; i<vec.size(); i++)
    {
        res = commonPrefix(res, vec[i]);
    }
    return res;
}

int main()
{
    vector<string> vec = {"flower", "flow", "flight", "flute", "flex"};
    cout << longestCommonPrefix(vec);
    return 0;
}
