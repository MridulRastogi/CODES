/**
*   used to retrieve the address of the current object.
*   is a local object pointer that is present in every non static member function of a class containing address of an object.
PROPERTIES OF THIS POINTER
* It is a local object pointer.
* It is created only for non-static member functions.
* this pointer is passed as a hidden parameter(this pointer is a hidden parameter)
Accessing an object : this.a;

*/
#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    int *p = a;
    for(i=0;i<5;i++)
        cin>>*(p+i);
    for(i=0;i<5;i++)
        cout<<*(p+i)<<" "<<(p+i)<<endl;
    return 0;
}
