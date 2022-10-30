#include<bits/stdc++.h>
using namespace std;

int numberOfWeakCharacters(vector<vector<int>>& vec)
{
    map<int, vector<int>> m;
    for(int i=0; i<vec.size(); i++)
        m[vec[i][1]].push_back(vec[i][0]);

    // for printing
    // for(auto it=m.begin(); it!=m.end(); it++)
    // {
    //     cout << it->first << " => ";
    //     for(auto itr=(it->second).begin(); itr!=(it->second).end(); itr++)
    //         cout << *itr << " ";
    //     cout << endl;
    // }

    bool flag = false;
    int counter = 0;
    for(int i=0; i<vec.size(); i++)
    {
        int attack = vec[i][0], defense = vec[i][1];
        for(auto it = m.find(defense); it!=m.end(), flag==false; it++)
            if((it->first) > defense)
                if( *max_element((it->second).begin(), (it->second).end()) > attack)
                {
                    counter++;
                    flag = true;
                }
        flag = false;
    }

    return counter;
}

int main()
{
    vector<vector<int>> vec = {{29,26},{92,1},{81,64},{41,54},{56,74},{76,39},{16,69},{78,84},{65,39},{7,2},{62,96},{16,22},{47,34},{16,22},{66,26},{93,49},{55,16},{41,21},{11,73},{17,1},{63,81},{90,37},{83,50},{7,97},{86,14},{68,67},{65,63},{35,32},{100,1},{23,4},{17,6},{74,52},{98,90},{4,15},{31,36},{69,53},{17,33},{80,56},{8,100},{94,85},{89,76},{14,76},{31,85},{89,54},{73,69},{55,7},{73,13},{31,100},{29,55},{82,6},{12,66},{17,72},{45,50},{99,73},{41,10},{89,16},{69,35},{72,34},{85,49},{12,5},{61,42},{32,28},{10,55},{61,19},{17,4},{48,59},{15,44},{7,48},{1,92},{68,12},{23,6},{5,92},{70,49},{59,3},{9,62},{50,6},{75,39},{7,79},{35,80},{94,41},{25,43},{44,16},{3,68},{87,62},{70,62},{68,49},{8,46},{16,7},{16,60},{42,48}};
    int result = numberOfWeakCharacters(vec);
    cout << result;
    return 0;
}
