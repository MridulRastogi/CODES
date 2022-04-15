#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a = to_string(n);
    string b = a;
    reverse(a.begin(), a.end());
    cout << (a==b ? "Palindrome" : "Not a Palindrome") << endl;
    string s = "Mridul";
    cout << s.substr(1,1) << endl;
    return 0;
}
