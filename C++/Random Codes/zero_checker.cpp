#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, counter=0;
    cin>>n;
    if(n>1000000 or n<1)
        cout << "Wrong Input";
    else
    {
        string s = to_string(n);
        if(s[0]=='0')
            cout << "Invalid Number";
        else
        {
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]=='0')
                    counter++;
            }
            cout << (counter>0 ? "Valid Number" : "Invalid Number");
        }
    }
    return 0;
}
