#include<bits/stdc++.h>
using namespace std;
int numberOfWeakCharacters(vector<vector<int>>& vec)
{
    map<int, vector<int>> m;
    for(int i=0; i<vec.size(); i++)
        m[vec[i][0]].push_back(vec[i][1]);

    bool found = false;
    int counter=0;
    for(int i=0; i<vec.size(); i++)
    {
        int attack = vec[i][0], defense = vec[i][1];        // storing the attack and defense
        for(auto it = m.find(attack); it!=m.end(); it++)    // traversing from the attack key in map
            if(it->first > attack)                          // if the key is greater than the attack
                for(auto itr = (it->second).begin(); itr!=(it->second).end(), found==false; itr++)      // traversing through the vector value of the key to find a greater value than the defense value
                    if(*itr > defense)
                    {
                        counter++;
                        found = true;
                    }
        found = false;
    }
    return counter;
}
int main()
{
    vector<vector<int>> vec = // {{5,5},{6,3},{3,6}};
    {{29,26},{92,1},{81,64},{41,54},{56,74},{76,39},{16,69},{78,84},{65,39},{7,2},{62,96},{16,22},{47,34},{16,22},{66,26},{93,49},{55,16},{41,21},{11,73},{17,1},{63,81},{90,37},{83,50},{7,97},{86,14},{68,67},{65,63},{35,32},{100,1},{23,4},{17,6},{74,52},{98,90},{4,15},{31,36},{69,53},{17,33},{80,56},{8,100},{94,85},{89,76},{14,76},{31,85},{89,54},{73,69},{55,7},{73,13},{31,100},{29,55},{82,6},{12,66},{17,72},{45,50},{99,73},{41,10},{89,16},{69,35},{72,34},{85,49},{12,5},{61,42},{32,28},{10,55},{61,19},{17,4},{48,59},{15,44},{7,48},{1,92},{68,12},{23,6},{5,92},{70,49},{59,3},{9,62},{50,6},{75,39},{7,79},{35,80},{94,41},{25,43},{44,16},{3,68},{87,62},{70,62},{68,49},{8,46},{16,7},{16,60},{42,48}};
    int result = numberOfWeakCharacters(vec);
    cout << result;
    return 0;
}
