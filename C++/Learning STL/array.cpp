#include<iostream>
#include<array>
using namespace std;
int main()
{
    int i;
    array<int,4> a = {8,5,2,7};
    for( i=0 ; i<a.size() ; i++ )
        cout<<a[i]<<" ";
    cout << endl;
    
    cout << "Element at 2nd index: " << a.at(2)   << endl;
    cout << "Array empty or not: "   << a.empty() << endl;
    cout << "First element: "        << a.front() << endl;
    cout << "Last element: "         << a.back()  << endl;

    return 0;
}
