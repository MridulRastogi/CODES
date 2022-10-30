#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> findDuplicate(vector<string>& paths)
{
    for(int i=0; i<paths.size(); i++)
    {
        string str = paths[i] + " ";
        string path, file="";

        for(int j=0; j<str.length(); j++)
        {
            if(s[i]==" ")                       // condition for obtaining the path to the file
            {
                counter++;
                if(counter == 1)
                    path = str.substr(0,i);
                else
                {
                    file = "";
                }
            }
            else
            {
                file += str[i];
            }
        }
    }

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
        for(int j=0; j<v[i].size(); j++)
            cout << v[i][j] << endl;
    return 0;
}
