#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> findDuplicate(vector<string>& paths)
{
    unordered_map<string, vector<string>> mp;
    for (auto it = paths.begin(); it!=paths.end(); it++)
    {
        stringstream s(*it);
        string root, file_name, data, file_path;
        int start, end;
        getline(s, root, ' ');
        while(getline(s, file_name, ' '))
        {
            start     = file_name.find('(');
            end       = file_name.find(')');
            data      = file_name.substr(start+1 , end-start-1);
            file_path = root + '/' + file_name.substr(0, start);
            mp[data].push_back(file_path);
        }
    }
    vector<vector<string>> res;
    for (auto it = mp.begin(); it != mp.end(); it++)
        if ((it->second).size() > 1)
            res.push_back(it->second);
    return res;
}

int main()
{
    vector<string> vec = {"root/a 1.txt(abcd) 2.txt(efgh)" ,
                          "root/c 3.txt(abcd)" ,
                          "root/c/d 4.txt(efgh)" ,
                          "root 4.txt(efgh)"};
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] << endl;
    cout << endl;
    vector<vector<string>> v = findDuplicate(vec);
    cout << endl;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
