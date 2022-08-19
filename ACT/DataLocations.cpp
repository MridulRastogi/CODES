
#include<bits/stdc++.h>
using namespace std;

vector<int> findDataLocations(vector<int> locations, vector<int> movedFrom, vector<int> movedTo)
{
    set<int> res;
    for(int i:locations)
        res.insert(i);
    for(int i=0; i<movedFrom.size(); i++)
    {
        if(movedFrom[i]!=movedTo[i])
        {
            res.erase((movedFrom[i]));
            res.insert(movedTo[i]);
        }
    }
    vector<int> vec;
    for(int i:res)
        vec.push_back(i);
    return vec;
}

int main()
{
    vector<int> locations = {1,6,7,8};
    vector<int> movedFrom = {1,7,2,5};
    vector<int> movedTo   = {2,3,5,9};
    vector<int> result = findDataLocations(locations, movedFrom, movedTo);
    for(int i:result)
        cout << i << " ";
    return 0;
}
