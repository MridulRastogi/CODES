#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> diagonalSort(vector<vector<int>>& mat)
{
    int r = mat.size();
    int c = mat[0].size();
    int r2 = 0, c2 = 0;

    vector<vector<int>> vec;

    for(int i=r-1; i>=0; i--)
    {
        int duplicate = i;
        vector<int> v;
        for(int j=0; j<=c2; j++)
        {
            v.push_back(mat[duplicate][j]);
            duplicate++;
        }
        vec.push_back(v);
        c2++;
    }

    c2 = 1;
    for(int i=0; i<r; i++)
    {
        int duplicate = 0;
        vector<int> v;
        for(int j=c2; j<c; j++)
        {
            v.push_back(mat[duplicate][j]);
            duplicate++;
        }
        vec.push_back(v);
        r2++;
        c2++;
    }

    // SORTING THE ELEMENTS EXTRACTED DIAGONALLY
    for(int i=0; i<vec.size(); i++)
        sort(vec[i].begin(), vec[i].end());

    // INSERTING THE ELEMENTS IN ORIGINAL MATRIX AFTER SORTING DIAGONALLY

    int x=0, y=0;
    r2 = 0, c2 = 0;
    for(int i=r-1; i>=0; i--)
    {
        int duplicate = i;
        for(int j=0; j<=c2; j++)
        {
            mat[duplicate][j] = vec[x][y];
            y++;
            duplicate++;
        }
        c2++;
        x++;
        y=0;
    }

    c2 = 1;
    for(int i=0; i<r; i++)
    {
        int duplicate = 0;
        for(int j=c2; j<c; j++)
        {
            mat[duplicate][j] = vec[x][y];
            duplicate++;
            y++;
        }
        r2++;
        c2++;
        x++;
        y=0;
    }

    return mat;
}

int main()
{
    //vector<vector<int>> mat = {{3,3,1,1},{2,2,1,2},{1,1,1,2}};

    vector<vector<int>> mat = {{75,21,13,24,8},{24,100,40,49,62}};

    for(int i=0; i<mat.size(); i++)
    {
        for(int j=0; j<mat[i].size(); j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    cout << endl;

    vector<vector<int>> vec = diagonalSort(mat);

    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    return 0;
}
