#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<sstream>
using namespace std;
void replace(int a[], int n, int num, int rep)
{
    for(int i=0; i<n; i++)
        if(a[i] == num)
            a[i] = rep;
}
int main()
{
    int n, i, c;
    cin>>n;
    cin.ignore();
    cout<<"Enter the queries: "<<endl;
    char s[n][10];
    for(i=0; i<n; i++)
        cin >> s[i];
    int q[n][3], a[n];
    for(i=0; i<n; i++)
    {
        stringstream ss;
        ss << s[i];
        string temp;
        int found;
        c=0;
        while (!ss.eof())
        {
            ss >> temp;
            if (stringstream(temp) >> found)
            {
                q[i][c] = found;
                c++;
            }
            temp = "";
        }
    }
    c=0;
    for(i=0; i<n; i++)
    {
        if(q[i][0] == 1)
        {
            a[c] = q[i][1];
            c++;
        }
        else if(q[i][0] == 2)
        {
            replace(a, c, q[i][1], q[i][2]);
        }
    }
    cout<<endl;
    for(i=0; i<c; i++)
        cout<<a[i]<<" ";
    return 0;
}
/*
5
1 2
2 1 3
1 1
1 2
2 1 3
*/
