#include<iostream>
using namespace std;

class Parent
{
    protected:
        int b;
    public:
        void setValue(int x)
        {
            b=x;
        }
};

class Child : private Parent
{
    public:
        void print(int x)
        {
            setValue(x);
            cout<<"Value of B : "<<b<<endl;
        }
};

int main()
{
    Child obj;
    obj.print(10);
    return 0;
}
