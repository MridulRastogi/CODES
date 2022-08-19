#include<bits/stdc++.h>
using namespace std;

bool isMatch(string s, string p)
{
    if(s==p)
        return true;
    else if(p==".*")
        return true;

    int j=0;
    for(int i=0; i<p.length(); i++)
    {
        cout << i << " " << j << " : ";
        if(p[i]=='.' and p[i+1]=='*')
            return true;
        else if(p[i]>='a' and p[i]<='z' and p[i+1]=='*')
        {
            while(p[i]==s[j])
                j++;
            i = ((i+2)<=p.length() ? i+2 : i+1);
        }
        else if(p[i]==s[j] or p[i]=='.')
        {
            j++;
        }
    }

    if(j>=s.length())
        return true;
    return false;
}

int main()
{
    vector<string> s = {"aab"  , "mriddul", "aa", "a" , "aa", "ab"};
    vector<string> p = {"c*a*b", "..idd*l", "a" , "aa", "a*", ".*"};
    vector<bool> preferred = {true, false, false,false, true, true};
    vector<bool> result;

    for(string str:s)
        cout << str << " | ";
    cout << endl;
    for(string str:p)
        cout << str << " | ";

    cout << "\n\nPreferred : ";
    for(bool j:preferred)
        cout << (j==true?"true ":"false ");

    cout << "\nResult    : \n";
    for(int i=0; i<s.size(); i++)
    {
        result.push_back((isMatch(s[i], p[i])));
        cout << (result[i]==true?"true ":"false ") << endl ;
    }

    cout << "\nFinal Result = > " << (preferred==result?"PASS\n\n":"FAIL\n");

    for(int i=0; i<s.size(); i++)
        cout << "\"" << s[i] << "\"" << endl << "\"" << p[i] << "\"" << endl;

    return 0;
}
