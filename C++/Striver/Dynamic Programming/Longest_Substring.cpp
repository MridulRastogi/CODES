#include<bits/stdc++.h>
using namespace std;

void printstring(string s, int start, int end)
{
    cout<<"String: ";
    for(int i=start; i<=end; i++)
        cout<<s[i];
    cout<<endl;
}

int lonPalSubStr(string s)
{
    int i,j,k,c=0,l = s.size();
    bool table[l][l];
    //memset(table, false, sizeof(table));
    for(i=0; i<l; i++)
        for(j=0; j<l; j++)
            table[i][j] = ((s[i]==s[j]) ? true : false);

    int maxlen=0;
    string s2="",s3="";
    for(int i=1; i<=(l+l-1); i++)
    {
        int start_col = max(0, i-l);
        int count     = min(i, min((l-start_col),l) );
        for(int j=0; j<count; j++)
        {
            if(table[min(l,i)-j-1][start_col+j] == true)
            {
                c++;
                s2 += s[min(l,i)-j-1];
            }
            else
            {
                if (maxlen<c)
                {
                    maxlen=c;
                    c=0;
                    s3 = s2;
                }
                s2 = "";
                c=0;
            }
        }
    }
    cout<<"String: "<<s3<<endl;
    return maxlen;
}

int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    cout<<"String: "<<s<<endl;
    int l = lonPalSubStr(s);
    cout<<"Length: "<<l<<endl;
    return 0;
}
