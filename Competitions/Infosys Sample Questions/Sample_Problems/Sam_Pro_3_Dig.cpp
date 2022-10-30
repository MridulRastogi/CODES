#include<bits/stdc++.h>
using namespace std;
#define li long long int
int main()
{
    li n, num;
    cin >> n;
    vector<li> vec;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    li max_dig = 0;
    for(int i=0; i<n-1; i++)
    {
        if(vec[i] < vec[i+1])
        {
            max_dig = max( max_dig , vec[i+1] - vec[i] + 1 );
            vec[i+1] = vec[i] - 1;
        }
    }
    for(int i:vec)
        cout << i << " ";
    li ans = ceil(sqrt(max_dig));
    cout << endl << ans;
    return 0;
}
/*
4
-1 1 1 1
*/
