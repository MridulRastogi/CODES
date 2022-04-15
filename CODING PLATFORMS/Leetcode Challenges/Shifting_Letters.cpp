#include<bits/stdc++.h>
using namespace std;
string shiftingLetters(string s, vector<int>& shifts)
    {
        int i,j,ascii;
        int ls = s.length();
        int lv = shifts.size();
        string s2 = "";
        for(i=0; i<lv; i++)
        {
            for(j=0; j<=i; j++)
            {
                ascii = int(s[j]);
                ascii = ascii + shifts[i];
                ascii = ascii>122 ? (96 + (ascii - 122)) : ascii;
                s2  += char(ascii);
            }
            if(i!=(ls-1))
                for(j=i+1; j<ls; j++)
                    s2 = s2 + s[j];
            s = s2;
            s2 = "";
        }
        return s;
    }

int main()
{
    string s = "abcd";
    vector<int> vec = {1,2,3,4};
    cout << shiftingLetters(s, vec);

    return 0;
}

abcd
bbcd
ddcd
ggfd
kkjh
