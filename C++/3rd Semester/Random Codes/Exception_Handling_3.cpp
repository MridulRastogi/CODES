#include<iostream>
using namespace std;

class Exception
{
    public:
        Exception()
        {   cout<<"Constructing an object."<<endl;  }
        ~Exception()
        {   cout<<"Destructing an object."<<endl;   }
};

int main()
{
    try
    {
        Exception e;
        throw 100;
    }
    catch(int i)
    {
        cout<<"Caught "<<i<<" as exception."<<endl;
    }
    return 0;
}
