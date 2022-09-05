#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    int i;
    array<int,4> a = {8,5,2,7};
    cout<<"Indicies: 0 1 2 3"<<endl;
    cout<<"Elements: ";
    for( i=0 ; i<a.size() ; i++ )
        cout<<a[i]<<" ";
    cout << endl << endl;

    cout << "Element at 1st Index : " << a.at(1)   << endl;
    cout << "Array Empty or Not   : " << a.empty() << endl;
    cout << "First Element        : " << a.front() << endl;
    cout << "Last  Element        : " << a.back()  << endl;

    return 0;
}
