#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, num1, num2, adding_term;
    string str1="", str2="";
    bool flag;
    char ch;
    cin >> t;
    while(t--)
    {
        cin >> n;

        ch = '2';
        num1 = 0;
        str1 = "";
        adding_term = 2;
        flag = true;
        while(flag==true)
        {
            num1 += adding_term;
            str1 += ch;
            ch = ch=='2' ? '1' : '2';
            adding_term = adding_term==2 ? 1 : 2;
            if((num1+adding_term)>n)
                flag = false;

        }

        ch='1';
        num2 = 0;
        str2 = "";
        adding_term = 1;
        flag = true;
        while(flag==true)
        {
            num2 += adding_term;
            str2 += ch;
            ch = ch=='1' ? '2' : '1';
            adding_term = adding_term==1 ? 2 : 1;
            if((num2+adding_term)>n)
                flag = false;
        }
        if(n==1)
            cout<<"1\n";
        else
        {
            if(str1.length()>=str2.length() && str1[0]=='2')
                cout << str1 << endl;
            else
                cout << str2 << endl;
        }
    }
    return 0;
}
