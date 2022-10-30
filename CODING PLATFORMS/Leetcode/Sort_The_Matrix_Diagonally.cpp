#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> diagonalSort(vector<vector<int>>& mat)
{
    if(mat.size()==1)
        return mat;
    vector<vector<int>> vec;
    vector<int> v;

    int r = mat.size();
    int c = mat[0].size();
    int f=0, c1=c-1, r1;

    for(int k=0; k<c; k++)
    {
        cout << k << endl;
        for(int i=0; i<=f; i++)
        {
            cout << i << i+c1 << " ";
            v.push_back(mat[i][i+c1]);
        }
        cout << endl;
        vec.push_back(v);
        v.clear();
        c1--;
        f++;
        cout << "OKAY\n";
    }

    c1=1, r1=1;
    for(int k=r-1; k>=0; k--)
    {
        cout << k << endl;
        for(int i=r1; i<c; i++)
        {
            cout << i << i-c1 << " ";
            v.push_back(mat[i][i-c1]);
        }
        cout << endl;
        vec.push_back(v);
        v.clear();
        c1++;
        r1++;
    }

    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    return mat;
}

int main()
{
    vector<vector<int>> vec, res;
    vec = {{3,3,1,1},{2,2,1,2},{1,1,1,2}};
    res = diagonalSort(vec);
    return 0;
}
