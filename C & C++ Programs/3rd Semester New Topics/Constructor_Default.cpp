#include<iostream>
using namespace std;
class Dummy
{
    public:
        Dummy() //explicit default constructor
        {
            cout<<"This is a user-defined constructor."<<endl;
        }
};
int main()
{
    Dummy dm,dm1;   //an implicit default constructor will be invoked automatically by the compiler
    return 0;
}
