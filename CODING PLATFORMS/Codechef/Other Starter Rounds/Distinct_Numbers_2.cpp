#include <bits/stdc++.h>
using namespace std;

int res, val;

int getResult(int n, int k, vector<int>& vec, set<int>& s)
{
    if(n==1 or k==0)
    {
        s.insert(n);
        vec[n] = n;
        return n;
    }
    res = 0;
    for(int i=1; i<=n/2; i++)
        if(n%i==0)
        {
            val = getResult(n*i, k-1, vec, s);
            s.insert(val);
            res += val;
            vec[n*i] = val;
        }
    val = getResult(n*n, k-1, vec, s);
    s.insert(val);
    res += val;
    vec[n*n] = val;
    return res;
}

int main()
{
    int t, n, k;
    cin >> t;
    cout << endl;
    while(t--)
    {
        vector<int> vec(10000001, 0);
        set<int> s;
        cin >> n >> k;
        int res = getResult(n, k, vec, s);
        int finalResult = 0;//accumulate(vec.begin(), vec.end(), 0);
        for(int i=0; i<vec.size(); i++)
            if(vec[i]!=0)
                finalResult += i;
        cout << finalResult << endl;
        vec.clear();
    }
	return 0;
}

/*
3
1 5
2 2
10 1

*/
