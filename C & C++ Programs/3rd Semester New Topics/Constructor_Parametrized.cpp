//Constructor Overloading (also included in this)
//Parametrized Constructor = Any constructor that contains arguments or parameters.
#include<iostream>
using namespace std;
class Dummy
{
    int a,b;                //Instance variables
    public:
        Dummy(int x,int y)  //Formal Parameters
        {
            a=x;    //assigning
            b=y;    //assigning
            cout<<"Value of A and B : "<<a<<" "<<b<<endl;
        }
        Dummy(int k)
        {
            a=k;
            cout<<"Value of K : "<<a<<endl;
        }
        Dummy()     //Explicit Default Constructor
        {
            cout<<"This is an Explicit Default Constructor."<<endl;
        }
};
int main()
{
    Dummy dm(100,200),dm1(400),dm3;
    return 0;
}
// * If we try to compile this code then it will result in an error.
// * Because there is no value that has been passed at the time of object creation.
// * No implicit(default) constructor will be called by the compiler. (We have defined our own constructor.)
//Constructor overloading is possible. (This is also a compile time process.)
