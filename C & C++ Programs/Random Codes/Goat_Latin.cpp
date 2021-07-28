#include<iostream>
#include<string.h>
using namespace std;
class Solution
{
    public:
    string toGoatLatin(string S)
    {
        string s,a="",add="",mad="";
        int i,j,c=0,z;
        char ch;
        for(i=0;i<S.length();i++)
        {
            if(S[i]!=' ')
            {
                a=a+S[i];
                c++;
            }
            else
            {
                cout<<a<<endl;

                add = "ma";
                ch = toupper(a[0]);

                if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                {
                    z=0;
                    while(z!=c)
                    {
                        add = add + "a";
                        z++;
                    }
                    a = a + add;
                }

                else if(a.length()>1)
                {
                    mad = a.substr(1,a.length());
                    mad = mad + a[0];
                    z=0;
                    while(z!=c)
                    {
                        add = add + 'a';
                        z++;
                    }
                    mad = mad + add;
                    a = mad;
                }
                s = s + a + " ";
            }
            a="";
            add="", mad="";
        }
        cout<<s;
    }
};
int main()
{
    string s;
    getline(cin,s);
    Solution to;
    to.toGoatLatin(s);
    return 0;
}
