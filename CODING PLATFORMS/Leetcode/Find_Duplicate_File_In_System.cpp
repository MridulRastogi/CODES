#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> findDuplicate(vector<string>& paths)
{
    unordered_map<string, vector<string>> hash;
    for (auto path : paths)
    {
        stringstream ss(path);
        string dir;
        string file;
        getline(ss, dir, ' ');
        cout << dir << " => \n";
        while (getline(ss, file, ' '))
        {
            cout << file << " | ";
            string content = file.substr(file.find('(') + 1, file.find(')') - file.find('(') - 1);
            cout << content << " | ";
            string name = dir + '/' + file.substr(0, file.find('('));
            cout << name << " || ";
            hash[content].push_back(name);
        }
        cout << endl;
    }
    vector<vector<string>> res;
    for (auto it = hash.begin(); it != hash.end(); it++)
        if (it->second.size() > 1)
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
