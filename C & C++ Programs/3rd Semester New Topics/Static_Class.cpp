#include<iostream>
using namespace std;
class sta
{
    public:
        static int x;
        void getX()
        {
            cout<<x<<endl;
        }
};
int sta::x=10;      //default value i.e. 0 is overwritten as 10
int main()
{
    sta st;
    st.getX();      //accessing value of a private member by a public(non private) member function.
    cout<<sta::x;
    return 0;
}
//static members can be accessed inside a non-static member function.
