#include<iostream>
using namespace std;
class Test
{
    int time;
    public:
        Lecture()
        {
            time = 40;
            cout<<"The Lecture starts now : "<<time<<endl;
        }
        void Lab()
        {
            cout<<"Lab is on"<<endl;
        }
        Lecture(int duration)
        {
            time = duration;
            cout<<"The Lecture starts now : "<<endl;
        }
};
int main()
{
    Test t;
    t.Lecture(40);
    return 0;
}
