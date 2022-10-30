#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, exp, monsters_power, bonus, c=0;
    cin >> t;                                   //inputting number of monsters
    cin >> exp;                                 //inputting the experience level
    vector<pair<int,int>> vec;
    vector<int> monsters;
    vector<int> bonuses;
    for(int i=1; i<=t; i++)
    {
        cin >> monsters_power;
        monsters.push_back(monsters_power);     //inputting the monsters powers
    }
    for(int i=0; i<t; i++)
    {
        cin >> bonus;
        vec.push_back(make_pair(monsters[i], bonus));
    }
    sort(vec.begin(), vec.end());               //sorting the pair vector
    for(auto j:vec)
    {
        if(exp >= j.first)
        {
            exp += j.second;
            c++;
        }
        else
            break;
    }
    cout << c;
    return 0;
}

/*
2
123
78
130
10
0
*/
