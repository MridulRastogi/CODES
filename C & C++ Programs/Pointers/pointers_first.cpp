#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    cout<<"Variable Data   : "<< a<<endl;
    cout<<"Variable Address: "<<&a<<endl;
    int *ptr = &a;
    cout<<"Pointer Data    : "<<*ptr<<endl;
    cout<<"Pointer Address : "<<&ptr<<endl;

    cout<<endl;

    int b = 40;
    cout<<"Variable Data   : "<< b<<endl;
    cout<<"Variable Address: "<<&b<<endl;
    int *ctr = &b;
    cout<<"Pointer Data    : "<<*ctr<<endl;
    cout<<"Pointer Address : "<<&ctr<<endl;

    return 0;
}
