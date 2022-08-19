#include<bits/stdc++.h>
using namespace std;

bool isAMatch(string s, string p, int i, int j)
{
    while((j+1) < p.length())
    {
        if(p[j]=='.' and p[j+1]=='*')
            return true;
        else if(s[i]>='a' and s[i]<='z' and p[j]=='.')
        {
            i++;
            j++;
        }
        else if(p[j]>='a' and p[j]<='z' and p[j+1]=='*')
        {
            while(s[i]==p[j])
                i++;
            j = (j+2)<p.length() ? j+2 : j+1;
        }
        else if(s[i]==p[j])
        {
            while(s[i] == p[j] and p[j+1]!='*')
            {
                i++;
                j++;
            }
        }
        if(p[j]=='*' and i>=s.length())
            return true;
        else if((p[j]=='*' or j>=p.length()) and i<(s.length()-1))
            return false;
    }
    return false;
}

bool isMatch(string s, string p)
{
    return (p==".*" ? true : isAMatch(s, p, 0, 0));
}

int main()
{
    vector<string> s = {"aab"  , "mriddul", "aa", "a" , "aa", "ab"};
    vector<string> p = {"c*a*b", "..idd*l", "a" , "aa", "a*", ".*"};
    vector<bool> preferred = {true, false, false,false, true, true};
    vector<bool> result;
    cout << "Result    : ";
    for(int i=0; i<s.size(); i++)
    {
        result.push_back((isMatch(s[i], p[i])));
        cout << (result[i]==true?"true, ":"false, ") ;
    }
    cout << endl << "Preferred : ";
    for(bool j:preferred)
        cout << (j==true?"true, ":"false, ");
    cout << "\n\nFinal Result = > " << (preferred==result?"PASS\n\n":"FAIL\n");
}
