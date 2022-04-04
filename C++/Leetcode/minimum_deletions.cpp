#include<bits/stdc++.h>
using namespace std;

int sort(map<char, int>& M)
{
    vector<pair<int, char>> A;
    for (auto it:M)
    {
        A.push_back(make_pair(it.second, it.first));
    }
    sort(A.begin(), A.end());
    priority_queue<int> pq;
    int countChar=0;
    for(int i=0; i<A.size(); i++)
        pq.push(A[i].first);
    while(!pq.empty())
    {
        int freq = pq.top();
        pq.pop();
        if(pq.empty())
            return countChar;
        if(freq==pq.top())
        {
            if(freq==pq.top())
            {
                if(freq>1)
                    pq.push(freq-1);
                countChar++;
            }
        }
    }
    return countChar;
}

int main()
{
    string s = "ceabaacb";
    map<char, int> m;
    for(int i=0; i<s.length(); i++)
    {
        if(m.find(s[i])==m.end())
            m[s[i]] = 1;
        else
            m[s[i]]++;
    }
    cout << sort(m);

    return 0;
}
/*
class Solution {
public:
    int minDeletions(string s)
    {
        map<char, int> m;
        for(int i=0; i<s.length(); i++)
        {
            if(m.find(s[i])==m.end())
                m[s[i]] = 1;
            else
                  m[s[i]]++;
        }
        vector<pair<int, char>> A;
        for (auto it:m)
        {
            pq.push(it.second);
            A.push_back(make_pair(it.second, it.first));
        }
        sort(A.begin(), A.end());
        priority_queue<int> pq;
        int countChar=0;
        for(int i=0; i<A.size(); i++)
            pq.push(A[i].first);
        while(!pq.empty())
        {
            int freq = pq.top();
            pq.pop();
            if(pq.empty())
                return countChar;
            if(freq==pq.top())
            {
                if(freq==pq.top())
                {
                    if(freq>1)
                        pq.push(freq-1);
                    countChar++;
                }
            }
        }
        return countChar;
    }
};
*/
