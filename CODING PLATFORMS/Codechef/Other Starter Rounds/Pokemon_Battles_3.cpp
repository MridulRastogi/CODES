#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void takeInput(vector<int>& vec, int n)
{
    int num;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
}

int main()
{
    FAST;
	int t, n, num, count=1, counter, maximum=INT_MIN, maxfre=1;
	cin >> t;
	while(t--)
	{
	    count = 1;
	    cin >> n;
	    vector<int> g, w;
        map<int, int> m;

	    takeInput(g, n);
        takeInput(w, n);

        for(int i=0; i<n; i++)
        {
            counter =  0;
            for(int j=0; j<n; j++)
                if(g[i] > g[j] or w[i] > w[j])
                    counter++;
            m[counter]++;
        }
        cout << m.rbegin()->second << endl;
	}
	return 0;
}
