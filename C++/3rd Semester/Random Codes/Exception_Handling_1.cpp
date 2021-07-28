#include<iostream>
using namespace std;
int main()
{
    int x=-10;
    cout<<"Before try block - Will be executed"<<endl;

    try
    {
        if(x<0)
        {
            throw x;    //After throw no statement is executed.
            cout<<"This statement won't be executed."<<endl;
        }
    }

    //There shpuld not be a statement between try and catch block, otherwise it will show an error.

    catch(int x)
    {
        cout<<"Exception Caught"<<endl;
    }

    cout<<"After Catch Block - Will be executed."<<endl;

    return 0;
}
