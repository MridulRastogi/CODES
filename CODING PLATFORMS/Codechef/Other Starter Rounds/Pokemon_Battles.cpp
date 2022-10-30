#include <bits/stdc++.h>
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
	int t, n, num;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    vector<int> g, w;
	    takeInput(g, n);
        takeInput(w, n);
        vector<set<int>> forGround, forWater;

        for(int i=0; i<n; i++)
        {
            set<int> temp;
            for(int j=0; j<n; j++)
                if(g[i] > g[j] or w[i] > w[j])
                    temp.insert(j);
            forGround.push_back(temp);
        }
        for(int i=0; i<n; i++)
        {
            set<int> temp = forGround[i];
            for(int j=0; j<n; j++)
                if(w[i] > w[j])
                    temp.insert(j);
            forWater.push_back(temp);
        }

        vector<int> fre;
        for(int i=0; i<forGround.size(); i++)
            fre.push_back(forGround[i].size());
        sort(fre.begin(), fre.end(), greater<int>());

        int count = 1;
        for(int i=0; i<fre.size()-1; i++)
        {
            if(fre[i] == fre[i+1])
                count++;
            else
                break;
        }
        cout << count << endl;
	}
	return 0;
}

/*
1
5
2 3 5 4 1
4 2 1 5 6
*/
