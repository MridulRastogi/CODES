#include<iostream>
using namespace std;
class sta
{
    public:
        static int x;
        void static displaycount()
        {
            x++;
        }

};
int sta::x;
int main()
{
    sta s;
    s.displaycount();
    s.displaycount();
    cout<<"Number of times function is called : "<<s.x;
    return 0;
}
