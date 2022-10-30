#include<bits/stdc++.h>
using namespace std;

void comma_seprated_values(string s, int* x, int* y)
{
    vector<int> v;
    stringstream ss(s);
    while(ss.good())
    {
        string substr;
        getline(ss, substr, ',');
        v.push_back(stoi(substr));
    }
    *x = v[0];
    *y = v[1];
}

int main()
{
    int n, m, sx, sy, i, j;
    char ch;
    string starting_position, s;
    cin>>n>>m;          //inputting the size of the matrix
    int points[n][m];   //for storing the points
    vector<char> path;  //storing the directions

    cin >> starting_position;   //inputting the starting position in string format
    comma_seprated_values(starting_position, &sx, &sy); //seprating the values

    for(i=0; i<n; i++)              //Allocating negative values
        for(j=0; j<m; j++)
            points[i][j] = -1;
    points[sx][sy] = 0;             //Allocating zero to starting position

    int cx, cy;         //inputting the positions in the matrix and the values to be stored over there
    for(i=0; i<n; i++)
    {
        cin>>s;
        comma_seprated_values(s, &cx, &cy);
        cin >> points[cx][cy];
    }
    while(cin>>ch && ch!='Q')   //inputting the directions
        path.push_back(ch);

    int points_collected=0;     //points collector variable initialized
    bool fall_of_matrix = false;    //checking if the directions don't fall out of the matrix

    for(long unsigned int I=0; I<path.size(); I++)    //MAIN LOOP FOR CHECKING THE VALID DIRECTIONS
    {
        if(path[I]=='R')
        {
            if((sy+1)<n)
            {
                sy = sy+1;
                points_collected += (points[sx][sy]==-1 ? -1 : (points[sx][sy]-1));
                points[sx][sy] = 0;
            }
            else
                fall_of_matrix = true;
        }
        else if(path[I]=='L')
        {
            if((sy-1)>=0)
            {
                sy = sy-1;
                points_collected += (points[sx][sy]==-1 ? -1 : (points[sx][sy]-1));
                points[sx][sy] = 0;
            }
            else
                fall_of_matrix = true;
        }
        else if(path[I]=='U')
        {
            if((sx-1)>=0)
            {
                sx = sx-1;
                points_collected += (points[sx][sy]==-1 ? -2 : (points[sx][sy]-2));
                points[sx][sy] = 0;
            }
            else
                fall_of_matrix = true;
        }
        else if(path[I]=='D')
        {
            if((sx+1)<n)
            {
                sx = sx+1;
                points_collected += (points[sx][sy]==-1 ? -2 : (points[sx][sy]-2));
                points[sx][sy] = 0;
            }
            else
                fall_of_matrix = true;
        }
        if(fall_of_matrix==true)
            break;
    }
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            if(points[i][j] > 0)
            {
                fall_of_matrix = true;
                break;
            }
    if(fall_of_matrix==true)
    {
        cout << "*** Mission Failed! ***" << endl;
        cout << "The maximum points can be collected : " << points_collected;
    }
    else if
    {
        cout << "*** Mission Passed! ***" << endl;
        cout << "You have collected maximum points : " << points_collected;
    }
    return 0;
}
/*
2 2
0,0
0,1
4
1,0
5
R
D
L
Q

2 2
0,0
0,1
4
1,0
5
R
L
Q
*/
