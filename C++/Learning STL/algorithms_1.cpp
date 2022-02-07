#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<int> v)
{
    cout<<"Elements: ";
    for(auto i=v.end()-1; i!=v.begin()-1; i--)
        cout<<*i<<" ";
    cout<<endl;
}
int  main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    print(v);
    for(int i=0;i<=6;i++)
        cout<<"Finding "<<i<<": "<<binary_search(v.begin(),v.end(),i)<<endl;
    sort(v.begin(),v.end());
    print(v);
    reverse(v.begin(),v.end());
    print(v);
    rotate(v.begin(),v.begin()+2,v.end());
    print(v);

    return 0;
}
