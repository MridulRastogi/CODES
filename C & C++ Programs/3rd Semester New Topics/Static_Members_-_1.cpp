#include<iostream>
using namespace std;
//void disp()
//{
//    static int x=10;
//    int y=5;
//    x++;
//    cout<<"Value of X : "<<x<<endl;
//    cout<<"Value of Y : "<<y<<endl;
//}
class sta
{
    public:
        static int x;   //declaration
        disp()
        {
            cout<<x<<endl;
        }
};
int sta::x = 9;     //defined- compiler assigned it a value equal to zero by default to zero if no value is assigned.
int main()
{
    sta st1,st2;
    st1.x = 100;
    st2.x = 200;
    cout<<st1.x<<endl;
    cout<<st2.x<<endl;
    /*  It will give 200 as output because,
        There can't be multiple values of static st1 variable for each object.  */
    return 0;
}
