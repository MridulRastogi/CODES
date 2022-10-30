#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream ou("output.txt");

    // int t = getline(in)
    // while(!in.eof())
    // {
    //     int text;
    //     getline(in, text);
    //     ou << text << endl;
    // }

    for(int i=1; i<=100000; i++)
        ou << i << endl;
    return 0;
}
