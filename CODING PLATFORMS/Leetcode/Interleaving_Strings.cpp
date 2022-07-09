#include<bits/stdc++.h>
using namespace std;

bool isInterleave(string s1, string s2, string s3)
{
    if(s1=="" and s2=="" and s3=="")
        return true;
    if((s1.length()+s2.length()) == s3.length())
    {
        deque<char> q1, q2, q3;
        bool flag = false;
        for(int i=0; i<s1.length(); i++)
            q1.push_back(s1[i]);
        for(int i=0; i<s2.length(); i++)
            q2.push_back(s2[i]);
        for(int i=0; i<s3.length(); i++)
            q3.push_back(s3[i]);
        while(flag==false)
        {
            while(q1.front() == q3.front())
            {
                q1.pop_front();
                q3.pop_front();
            }
            while(q2.front() == q3.front())
            {
                q2.pop_front();
                q3.pop_front();
            }
            if(q3.empty())
                flag = true;
            else if((q1.empty() or q2.empty()) and !q3.empty())
                return false;
        }
        if(q3.empty())
            return true;
    }
    return false;
}

int main()
{
    //string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac";
    string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc";
    string flag = isInterleave(s1, s2, s3)==1 ? "true" : "false";
    cout << flag;
    return 0;
}
