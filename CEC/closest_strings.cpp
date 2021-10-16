#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<string> s = {"the", "quick", "brown", "fox", "quick"};
    string w1="quick", w2="the";
    map<string, vector<int>> m;
    int i;
    //m.insert(w1);
    //m.insert(w2);
    for(i=0; i<s.size(); i++)
    {
        if(s[i]==w1)
            m[w1].push_back(i);
        else if(s[i]==w2)
            m[w2].push_back(i);
    }
    for(int j=0; j<m[w1].size(); j++)
    {
        cout << m[w1][j] << " ";
    }
    cout<<endl;
    for(int j=0; j<m[w2].size(); j++)
    {
        cout << m[w2][j] << " ";
    }
    return 0;
}
