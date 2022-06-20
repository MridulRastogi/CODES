//memset(table, false, sizeof(table));

#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
    int i, j, k, c=0, l=s.size(), x, y, copy, maxn=INT_MIN, start, end;
    bool table[l][l];
    for(i=0; i<l; i++)
        for(j=0; j<l; j++)
            table[i][j] = ((s[i]==s[j]) ? true : false);

    for(i=0; i<l; i++)
    {
        for(j=0; j<l; j++)
            cout << table[i][j] << " ";
        cout << endl;
    }

    start=0, end=0;
    for(i=0; i<l; i++)
    {
        for(j=0; j<l; j++)
        {
            x = i;
            y = j;
            c = 0;
            while(x!=l and y!=-1 and table[x][y]==true)
            {
                c++;
                x++;
                y--;
            }
            if(maxn < c)
            {
                start = i;
                end = x-1;
                maxn = c-1;
            }
        }
    }
    cout << endl << start << " " << end << " " << maxn << endl;
    string s2 = "";
    s2 = s.substr(start, maxn);
    return s2;
}

int main()
{
    string s = "aacabdkacaa";
    string s2 = longestPalindrome(s);
    cout << endl << "MAIN  : " << s;
    cout << endl << "RESULT: " << s2 << endl;
    return 0;
}
