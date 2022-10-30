#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int first_seg = (n/3)-1;
    int second_seg = 1;
    int third_seg = n - (3 + first_seg + second_seg);
    int result = min(min(abs(first_seg-second_seg), abs(second_seg-third_seg)), abs(first_seg-third_seg));
    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
