#include<iostream>
using namespace std;
class Sample
{
    int a;
public:
    void set(int x)
    {
        a = x;
        cout<<"Address of current object pointed by this pointer is "<<this<<endl;
        //this pointer points the current object/variable in reference.
    }
    void show()
    {
        cout<<"The value of a is : "<<a<<endl;
    }
};
int main()
{
    Sample s1,s2;
    s1.set(20);
    cout<<"Address of S1 is : "<<&s1<<endl;
    s2.set(30);
    cout<<"Address of S2 is : "<<&s2<<endl;
    s1.show();
    s2.show();
    return 0;
}
