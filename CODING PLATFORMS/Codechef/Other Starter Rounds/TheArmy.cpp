#include<bits/stdc++.h>
using namespace std;
void fillArrayLeft(int ar[], int n, int pos)
{
    int c=0;
    for(int i=pos; i>=0; i--)
    {
        ar[i] = max(ar[i],c);
        c++;
    }
}
void fillArrayRight(int ar[], int n, int pos)
{
    int c=0;
    for(int i=pos; i<n; i++)
    {
        ar[i] = max(ar[i],c);
        c++;
    }
}
int main()
{
    int t,n,m;
    cin >> t;
    while(t--)
    {
        map<int, int> fr;
        cin >> n >> m;
        int rounds[m], ar[n] = {0};
        for(int i=0; i<m; i++)
        {
            cin >> rounds[i];
            if(fr.find(rounds[i])==fr.end())
                fr[rounds[i]] = 1;
        }
        for(auto j:fr)
        {
            fillArrayRight(ar, n, j.first);
            fillArrayLeft(ar, n, j.first);
        }
        for(int i=0; i<n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
    return 0;
}
