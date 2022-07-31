#include<bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> pb, int n)
{
    for(int i=0; i<n; i++)
        cout << pb[i].first << " " << pb[i].second << endl;
}

int main()
{
    int n, num, exp, c=0, temp;
    cin >> n >> exp;
    vector<pair<int, int>> pb;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        pb.push_back(make_pair(num, 0));
    }
    for(int i=0; i<n; i++)
    {
        cin >> num;
        pb[i].second = num;
    }
    sort(pb.begin(), pb.end());
    cout<<endl; print(pb,n); cout<<endl;
    for(int i=0; i<n; i++)
    {
        if(exp >= pb[i].first)
        {
            exp += pb[i].second;
            c++;
        }
        else
            break;
    }
    cout << "Number of monsters defeated: " << c << endl;
    cout << "Experience: " << exp;
    return 0;
}

/*
4
123
78 130 78 160
10 25 0 20
*/
