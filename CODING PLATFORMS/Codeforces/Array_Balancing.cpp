#include<bits/stdc++.h>
using namespace std;
long long summing(vector<long long>& vec)
{
    long long s=0, l=vec.size()-1;
    for(long long i=0; i<l; i++)
        s += abs(vec[i+1]-vec[i]);
    return s;
}
int main()
{
    long long t, num, n;
    cin >>t;
    while(t--)
    {
        cin >> n;
        vector<long long> v, b;
        for(long long i=0; i<n; i++)
        {
            cin >> num;
            v.push_back(num);
        }
        for(long long i=0; i<n; i++)
        {
            cin >> num;
            b.push_back(num);
        }
        for(long long i=0; i<n; i++)
            if(v[i]>b[i])
                swap(v[i], b[i]);
        cout << summing(v)+summing(b) << endl;
    }
    return 0;
}
