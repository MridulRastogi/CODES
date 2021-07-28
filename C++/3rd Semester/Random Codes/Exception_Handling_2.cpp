//Catch All Block - To catch all exceptions thrown from try block irrespective of the datatype of the thrown value.
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a value : ";
    cin>>x;
    try
    {
        if(x<10)
        {
            throw 10;
        }
    }
    catch(char c)
    {
        cout<<"Exception Caught"<<endl;
    }
    catch(...)
    {
        cout<<"Default Exception Caught"<<endl;
    }
    return 0;
}
