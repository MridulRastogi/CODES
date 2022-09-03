#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=0;
    vector<int> vec;
    while(num!=-1)
    {
        vec.push_back(num);
        cin >> num;
    }
    int sum  = accumulate(vec.begin(), vec.end(), 0);
    cout << "\n\n Result : " << sum << "\n\n";
    return 0;
}
