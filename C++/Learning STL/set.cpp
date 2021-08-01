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
    s.insert(2);

    print(s);
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    print(s);

    return 0;
}
