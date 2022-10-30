#include<bits/stdc++.h>
using namespace std;

// This code represents
// BACKTRACKING with RECURSION

void print(int n)
{
    if(n<1)
        return;
    print(n-1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}
