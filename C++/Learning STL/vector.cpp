#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size     -> " << v.size()     << endl;
    cout << "Front Element -> " << v.front() << endl;
    cout << "Back Element  -> " << v.back()  << endl;

    cout << "BEFORE POP" << endl;
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
    v.pop_back();
    cout << "AFTER POP" << endl;
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;

    cout<<"BEFORE CLEARING :"<<endl;
    cout<<"Size: "<<v.size()<<" | Capacity: "<<v.capacity()<<endl;
    v.clear();
    cout<<"AFTER CLEARING :"<<endl;
    cout<<"Size: "<<v.size()<<" | Capacity: "<<v.capacity()<<endl;

    return 0;
}
