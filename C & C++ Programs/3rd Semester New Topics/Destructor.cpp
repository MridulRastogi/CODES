//Destructor - Used to deallocate the memory that is associated with an OBJECT
/*  It is not destroying the object rather it is releasing the memory
    before the object gets destroyed.(scope of the object gets over)    */
/*
Properties of Destructor :
1) It is a member function or an instance of a member function.
2) The name of the destructor must be same as the name of the class.(but it should be preceeded by a tilde sign).
3) Can't be static.
4) There is no return type for a destructor.
5) It doesn't contain any argument, as no arguments are provided to a destructor.
6) Can't be inherited.
*/
#include<iostream>
using namespace std;
class Test
{
    public:
        Test()
        {
            cout<<"Constructor Invoked"<<endl;
        }
        ~Test()     //no overloading of destructor is possible
        {
            cout<<"Destructor Invoked"<<endl;
        }
};
int main()
{
    Test t1,t2;
    {
        cout<<"In Block"<<endl;
        Test t3;
    }
    cout<<"Exited From Block"<<endl;
    return 0;
}
/*
OUTPUT :
Constructor Invoked     This is of t1
Constructor Invoked     This is of t12

In Block                This is of Main Block

Constructor Invoked     This is of t3
Destructor Invoked      This is of t3

Exited From Block       This is of Main

Destructor Invoked      This is of t1
Destructor Invoked      This is of t2
*/
