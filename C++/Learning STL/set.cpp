#include<iostream>
#include<set>
using namespace std;
void print(set<int> s)
{
    cout<<"Elements: ";
    for(auto i:s)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(5);
    s.insert(5);
// 5 1 6 5 3 5 => 5 1 6 3 => 1 3 5 6
    print(s);
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    print(s);
    cout<<"4 is present or not => "<<s.count(4)<<endl;
    return 0;
}
