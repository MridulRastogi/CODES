#include<bits/stdc++.h>
using namespace std;

int threeSumMulti(vector<int>& arr, int target)
{
    int s=0;
    map<int, int> m;
    //map<vector<int>, int> vec;
    for(int i: arr)
    {
        if(m.find(i)==m.end())
            m[i] = 1;
        else
            m[i]++;
    }

    for(auto i=m.begin(); i!=m.end(); i++)
    {
        for(auto j=i; j!=m.end(); j++)
        {
            for(auto k=j; k!=m.end(); k++)
            {
                if((*i).first<(*j).first and (*j).first<(*k).first)
                {
                    //vector<int> v;
                    if(((*i).first + (*j).first + (*k).first)==target)
                    {
                        s++;
                        /*v.push_back((*i).first);
                        v.push_back((*j).first);
                        v.push_back((*k).first);*/
                    }
                    /*
                    if(vec.find(v)==vec.end())
                        vec[v] = 1;
                    else
                        vec[v]++;
                    */
                }
            }
        }
    }
    /*
    s=0;
    for(auto i=vec.begin(); i!=vec.end(); i++)
        s += (*i).second;
    */
    return s;
}

int main()
{
    int n, num;
    cin >> n;
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    num = threeSumMulti(vec, 8);
    cout << num;
    return 0;
}
/*
10
1 1 2 2 3 3 4 4 5 5
*/
