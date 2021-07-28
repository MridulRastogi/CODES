#include<iostream>
using namespace std;
int main()
{
    string s = "adeaceadefcbfdeadecfbbfcdeacfedaedfcbfedeaecb";
    int i,j,l,c=1;
    char temp;
    l = s.length();
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(i=0;i<l;i++)
    {
        if(s[i]==s[i+1])
            c++;
        else
        {
            cout<<s[i-1]<<" = "<<c<<endl;
            c=1;
        }
    }
    cout<<l;
    return 0;
}
