#include<bits/stdc++.h>
using namespace std;

void print(vector<char>& v)
{
    for(char ch:v)
        cout << ch;
    cout << endl;
}

string removeStars(string str)
{
    deque<char> d;
    string s2 = "";
    for(char ch:str)
        d.push_back(ch);
    int i=0;
    while(d.empty()==false)
    {
        if(d[i+1]=='*')
        {
            d.pop_front();
            d.pop_front();
        }
        else
        {
            s2 += d.front();
            d.pop_front();
        }
    }
    return s2;
}

int main()
{
    std::vector<string> s = {"leet**cod*e", "erase*****"};
    for(string str : s)
        cout << removeStars(str) << endl << endl;
    return 0;
}
