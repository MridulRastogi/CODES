#include<iostream>
using namespace std;
/*
class Dummy
{
    int x,y;
public:
    void get()
    {
        x=10;
        y=20;
    }
    void show()
    {
        cout<<"X : "<<x<<endl<<"Y : "<<y<<endl;
    }
};
int main()
{
    Dummy dm;
    dm.show();  //will display garbage values
    dm.get();
    dm.show();  //will display actual values
    return 0;
}
*/
//1. Name of the constructor must be same as the name of the class.
//2. It is a special member function.
//3. There is no need to access the constructor function with the dot(.) operator.
//4. It can't be static.
//5. It can't be inherited.
//6. Constructor do not return any value. (No return type not even void.)
//7. It is dedicated for an object. (It is an instance member function.)
//* Constructor MUST BE DECLARED INSIDE A PUBLIC FUNCTION.
class Dummy
{
    int x,y;
public:
    Dummy()
    {
        x=10;
        y=20;
    }
    void show()
    {
        cout<<"X : "<<x<<endl<<"Y : "<<y<<endl;
    }
};
int main()
{
    Dummy dm;       //Constructor will be invoked.
    dm.show();
    return 0;
}
