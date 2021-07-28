#include<iostream>
#include<string>
using namespace std;

string GOC(string s1, string s2)
{
    while(true)
    {
        if (s1+s2 != s2+s1)     //checking if both strings are equal after concatenation from front and back
            return "";
        if (s1 == s2)           //if both strings are equal then returning
            return s1;
        s1 = (s1.size() > s2.size()) ? s1.substr(s2.size()) : s1;
        s2 = (s2.size() > s1.size()) ? s2.substr(s1.size()) : s2;
    }
    return "";
}

int main()
{
    string s1,s2;
    cout<<"Enter First String : ";
    getline(cin,s1);
    cout<<"Enter Second String : ";
    getline(cin,s2);
    cout<<GOC(s1,s2);
    return 0;
}
