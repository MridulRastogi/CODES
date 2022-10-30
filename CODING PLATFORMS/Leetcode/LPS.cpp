#include<bits/stdc++.h>
using namespace std;

string getResult(char ch[], int l, int startPos, int len)
{
    string res = "";
    for(int i=startPos; i<len; i++)
        if(ch[i]!=' ')
            res += ch[i];
    return res;
}

void doInsert(set<string>& obtained, string s, int l)
{
    int left = 0, right = s.length()-1  ;
    left++;
    right--;
    while(s.length()!=1 and left<right)
    {
        s = s.substr(left, right);
        obtained.insert(s);
        left++;
        right--;
    }
}

void longestPalindrome(string s, char ar[], int p[], int l)
{
    // char ar[l];
    int maxLen=0, start=0, maxRight=0, center=0, c=0; //, p[l];

    for(int i=0; i<l; i++)
        p[i] = 0;
    ar[0]   = '@';
    ar[l-1] = '$';

    for(int i=1; i<l-1; i++)
        ar[i] = (i%2==1 ? ' ' : s[c++]);

    for(int i=1; i<l-1; i++)
    {
        if(i<maxRight)
            p[i] = min(maxRight-i, p[2*center-i]);
        while(ar[i+p[i]+1] == ar[i-p[i]-1])
        {
            p[i]++;
        }
        if(i+p[i] > maxRight)
        {
            center = i;
            maxRight = i+p[i];
        }
        if(p[i] > maxLen)
        {
            start = (i-p[i]-1)/2;
            maxLen = p[i];
        }
    }

    // string res = getResult(s, start, start+maxLen-1);
    // return res;
}

int main()
{
    string s;
    int lenS, q, x, y;
    cin >> lenS;
    cin >> s;
    cin >> q;
    vector<pair<int, int>> queries;
    for(int i=0; i<q; i++)
    {
        cin >> x >> y;
        queries.push_back(make_pair(x, y));
    }

    int l = 2*s.length()+3;
    char ar[l];
    int p[l];
    longestPalindrome(s, ar, p, l);

    for(char ch:ar)
        cout << ch << " ";
    cout << endl;
    for(int i:p)
        cout << i << " ";
    cout << endl;

    set<string> obtained;
    for(int i=0; i<l; i++)
    {
        if(p[i]>0)
        {
            int startPos = i-(p[i]-1);
            int len = startPos + (p[i]*2) - 1;
            string res = getResult(ar, l, startPos, len);
            obtained.insert(res);
            if(res.length()>2)
                doInsert(obtained, res, res.length());
        }
    }

    string finalString = "";

    for(auto it = obtained.begin(); it!=obtained.end(); it++)
    {
        cout << *it << " ";
        finalString += *it;
    }
    cout << endl << finalString << endl;

    int lofs = finalString.length();
    for(int i=0; i<queries.size(); i++)
    {
        cout << queries[i].first << " " << queries[i].second << " => ";
        if(queries[i].first >= lofs or queries[i].second > lofs)
            cout << "-1" << endl;
        else
        {
            string value = finalString.substr(queries[i].first-1, queries[i].second);
            cout << value << endl;
        }
    }

    return 0;
}
