#include<bits/stdc++.h>
using namespace std;

void getValidation(string s, bool number_present, bool uppercase_present, bool lowercase_present, bool special_present)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=48 and s[i]<=57)
            number_present = true;
        else if(s[i]>=65 and s[i]<=90)
            uppercase_present = true;
        else if(s[i]>=97 and s[i]<=122)
            lowercase_present = true;
        else if(s[i]=='#' or s[i]=='@' or s[i]=='*' or s[i]=='&')
            special_present = true;
    }
}

bool properly_validated(string s)
{
    bool number_present=false, uppercase_present=false, lowercase_present=false, special_present=false;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=48 and s[i]<=57)
            number_present = true;
        else if(s[i]>=65 and s[i]<=90)
            uppercase_present = true;
        else if(s[i]>=97 and s[i]<=122)
            lowercase_present = true;
        else if(s[i]=='#' or s[i]=='@' or s[i]=='*' or s[i]=='&')
            special_present = true;
    }
    if(number_present==true and uppercase_present==true and lowercase_present==true and special_present==true and s.length()>=7)
        return true;
    return false;
}

int main()
{
    int t, n;
    cin >> t;
    for(int z=1; z<=t; z++)
    {
        string s;
        cin >> n;
        cin >> s;
        bool length_validation = ((s.length()>=7) ? true : false);
        if(length_validation==true)
        {
            bool number_present=false, uppercase_present=false, lowercase_present=false, special_present=false;
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]>=48 and s[i]<=57)
                    number_present = true;
                else if(s[i]>=65 and s[i]<=90)
                    uppercase_present = true;
                else if(s[i]>=97 and s[i]<=122)
                    lowercase_present = true;
                else if(s[i]=='#' or s[i]=='@' or s[i]=='*' or s[i]=='&')
                    special_present = true;
            }
            //getValidation(s, number_present, uppercase_present, lowercase_present, special_present);
            //cout << number_present << " " << uppercase_present << " " << lowercase_present << " " << special_present << endl;
            if(number_present == false)
                s = s + '1';
            if(uppercase_present == false)
                s = s + 'A';
            if(lowercase_present == false)
                s = s + 'a';
            if(special_present == false)
                s = s + '#';
            cout << "Case #" << z << ": " << s << endl;
        }
        else
        {
            bool number_present=false, uppercase_present=false, lowercase_present=false, special_present=false;
            getValidation(s, number_present, uppercase_present, lowercase_present, special_present);
            while(properly_validated(s)==false)
            {
                if(number_present==false)
                {
                    s+='1';
                    number_present = true;
                }
                if(properly_validated(s)==false)
                {
                    number_present = false, uppercase_present = false, lowercase_present = false, special_present = false;
                }
                else
                    break;

                if(uppercase_present==false)
                {
                    s+='A';
                    uppercase_present = true;
                }
                if(properly_validated(s)==false)
                {
                    number_present = false, uppercase_present = false, lowercase_present = false, special_present = false;
                }
                else
                    break;

                if(lowercase_present==false)
                {
                    s+='a';
                    lowercase_present = true;
                }
                if(properly_validated(s)==false)
                {
                    number_present = false, uppercase_present = false, lowercase_present = false, special_present = false;
                }
                else
                    break;

                if(special_present==false)
                {
                    s+='#';
                    special_present = true;
                }
                if(properly_validated(s)==false)
                {
                    number_present = false, uppercase_present = false, lowercase_present = false, special_present = false;
                }
                else
                    break;
            }
            cout << "Case #" << z << ": " << s << endl;
        }
    }
    return 0;
}
