#include<iostream>
using namespace std;
class op
{
    int a;
public:
    op(){}
    op(int x)
    {
        a=x;
    }
    op operator ++(int); //declaration
    void show()
    {
        cout<<"A : "<<a<<endl;
    }
};
op op::operator ++(int)
{
    op temp;
    temp.a = a++;
    return temp;
}
int main()
{
    op o1(10),o2;
    //o2 = o1++; // pre-increment o2=o1.operator++()
    o2 = o1.operator ++(3);
    cout<<"After Overloading the value of A in O2 is = "<<endl;
    o2.show();
    cout<<"After Overloading the value of A in O1 is = "<<endl;
    o1.show();
    return 0;
}
