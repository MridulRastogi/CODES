#include<iostream>
using namespace std;

class Time
{
    int hr, min, sec;
    public:
        Time()
        {
            hr=0;
            min=0;
            sec=0;
        }
        void show()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
        void SetTime()
        {
            cout<<endl<<"Enter the hour: ";
            cin>>hr;
            cout<<endl<<"Enter the minute: ";
            cin>>min;
            cout<<endl<<"Enter the second: ";
            cin>>sec;
            cout<<endl<<"Time mentioned is: ";
			show();
        }
        Time operator + (Time obj)
        {
            Time res;
            int a,b;
            a=(sec+obj.sec);
            res.sec=a%60;
            b=(min+obj.min)+(a/60);
            res.min=b%60;
            res.hr=hr+obj.hr+(b/60);
            res.hr%=12;
            return res;
        }
};
int main()
{
    Time t1,t2,t3;
    cout<<" 12 Hour Clock!"<<endl;
    cout<<endl<<"Enter First time: ";
    t1.SetTime();
    cout<<endl<<"Enter Second time: ";
    t2.SetTime();
    t3=t1+t2;
    cout<<endl<<"Sum of times: ";
    t3.show();
    return 0;
}
