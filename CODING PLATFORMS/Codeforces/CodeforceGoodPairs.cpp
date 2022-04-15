#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin >> n;
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        int maximum = max_element(vec.begin(), vec.end())-vec.begin()+1;
        int minimum = min_element(vec.begin(), vec.end())-vec.begin()+1;
        cout << minimum << " " << maximum << endl;
    }

    return 0;
}
