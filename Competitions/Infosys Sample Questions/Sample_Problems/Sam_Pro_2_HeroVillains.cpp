#include<bits/stdc++.h>
using namespace std;

int removeVillains(vector<int>& heroes, vector<int>& villains, int nh, int nv)
{
    int vidx=0, hidx=0, to_remove;
    while(nv!=0 or nh!=0)
    {
        if(heroes[hidx] == villains[vidx])
        {
            heroes[hidx] = 0;
            villains[vidx] = 0;
            hidx++; nh--;
            vidx++; nv--;
        }
        else if(heroes[hidx] > villains[vidx])
        {
            heroes[hidx] = heroes[hidx] - villains[vidx];
            villains[vidx] = 0;
            vidx++; nv--;
        }
        else if(heroes[hidx] < villains[vidx])
        {
            villains[vidx] = villains[vidx] - heroes[hidx];
            heroes[hidx] = 0;
            hidx++; nh--;
        }
        if(hidx == heroes.size())
        {
            to_remove = villains.size() - vidx;
            break;
        }
        else if(vidx == villains.size())
        {
            to_remove = 0;
            break;
        }
    }   //while ends
    return to_remove;
}

int main()
{
    int nv, nh, h, num;
    vector<int> villains, heroes;
    cin >> nv >> nh >> h;
    for(int i=0; i<nv; i++)
    {
        cin >> num;
        villains.push_back(num);
    }
    for(int i=0; i<nh; i++)
        heroes.push_back(h);

    cout << removeVillains(heroes, villains, nh, nv);
    return 0;
}

/*
nv -> number of villains
nh -> number of heroes
h -> health of each hero
villains[i] -> health of each villain
heroes[i] -> health of each hero
*/
