#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    vec.push_back(3);
    vec.insert(vec.begin(), 2);
    for(int i:vec)
        cout << i;
    return 0;
}
