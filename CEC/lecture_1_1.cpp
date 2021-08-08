#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v)
{
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v;
    for(int i=1;i<=8;i++)
        v.push_back(i*10);
    int i, j=v.size()/2;
    vector<int> w;
    for(i=0 ; i<j,j<v.size() ; i++,j++)
    {
        w.push_back(v.at(i));
        w.push_back(v.at(j));
    }
    print(v);
    print(w);
    return 0;
}
