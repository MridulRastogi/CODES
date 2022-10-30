#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,num,n;
    cin>>t;
    for(int z=1; z<=t; z++)
    {
        c=0;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++)
        {
            if(v[i]>c)
                c++;
        }
        cout<<"Case #"<<z<<": "<<c<<endl;
    }
    return 0;
}
