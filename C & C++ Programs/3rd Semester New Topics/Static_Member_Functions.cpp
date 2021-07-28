//Can access only static data members.
//They can be accessed with or without an object.
#include<iostream>
using namespace std;
class sta
{
    static int x;
    public:
        //static void getx()  //<qualifier> <return type> <name of member function>
            //or
        void static getx(int k)
        /*defining the static data member function*/
        {
            x=k;
            cout<<x;
        }
};
int sta::x=100;
int main()
{
    //no object creation allowed
    sta::getx(500);  //accessing the static member function with class label.
}
/*static member (data member) can be accessed inside non-static as well as static member functions*/
/*static member functions can only access static data member,
no non static or instance  variable can be accessed inside a static function*/
