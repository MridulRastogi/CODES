#include<iostream>
using namespace std;

class count
{
    static int x;
    public:
        count()
        {
            x++;
        }
        void showObjectCount()
        {
            cout<<"The number of objects made are : "<<x<<endl;
        }
};

int count::x;

int main()
{
    count c1,c2,c3,c4;
    c4.showObjectCount();
    return 0;
}
