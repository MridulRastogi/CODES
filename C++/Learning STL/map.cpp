#include<iostream>
#include<map>
using namespace std;
void print(map<int,string> m)
{
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
}
int main()
{
    map<int,string> m;
    m[1] = "Mridul";
    m[2] = "Raghav";
    m[3] = "Sanskar";
    m[4] = "Madhuram";
    m.insert({6,"Divyanshi"});
    cout<<"\nBefore Erasing: \n";
    print(m);
    cout<<"\nFinding 6 => "<<m.count(6)<<endl;
    m.erase(4);
    cout<<"\nAfter erasing: \n";
    print(m);

    auto it = m.find(3);
    for(auto i=it; i!=m.end(); i++)
        cout<<(*i).first<<endl;     //returns the elements from and onwards that key or index

    return 0;
}
