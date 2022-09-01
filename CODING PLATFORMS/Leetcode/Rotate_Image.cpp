#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> vec)
{
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}

void rotate(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    vector<vector<int>> vec = matrix;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            matrix[i][j] = vec[j][i];
    for(int i=0; i<matrix.size(); i++)
        reverse(matrix[i].begin(), matrix[i].end());
}

int main()
{
    vector<vector<vector<int>>> vec = { {{1,2,3},{4,5,6},{7,8,9}}, {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}} };
    for(int i=0; i<vec.size(); i++)
    {
        cout << i+1 << " MATRIX : \n\n";
        print(vec[i]);
        rotate(vec[i]);
        cout << endl;
        print(vec[i]);
        cout << endl;
    }
    return 0;
}
