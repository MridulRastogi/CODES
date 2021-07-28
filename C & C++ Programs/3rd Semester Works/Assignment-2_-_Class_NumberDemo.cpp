#include<iostream>
using namespace std;
class NumberDemo
{
    public:
        int n1,n2;
        void InputNumber()
        {
            cout<<"Enter value of N1 : ";
            cin>>n1;
            cout<<"Enter value of N2 : ";
            cin>>n2;
        }
        void show()
        {
            cout<<"Value of N1 & N2 : "<<n1<<" "<<n2<<endl;
        }
        void swap()
        {
            n1 = n1 + n2;
            n2 = n1 - n2;
            n1 = n1 - n2;
        }
};
int main()
{
    NumberDemo nd;
    nd.InputNumber();
    nd.show();
    nd.swap();
    nd.show();
    return 0;
}
