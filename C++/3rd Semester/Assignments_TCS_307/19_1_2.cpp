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
            cout<<hr<<":"<<min<<":"<<sec<<endl<<endl;
        }
        void SetTime()
        {
            cout<<"Enter the hour   : ";
            cin>>hr;
            cout<<"Enter the minute : ";
            cin>>min;
            cout<<"Enter the second : ";
            cin>>sec;
            cout<<"Time is : ";
			show();
        }
        friend Time operator + (Time obj1, Time obj2);
};

Time operator + (Time obj1, Time obj2)
{
    Time res;
    int a,b;
    a = (obj1.sec+obj2.sec);
    res.sec = a%60;
    b = (obj1.min+obj2.min)+(a/60);
    res.min = b%60;
    res.hr = obj1.hr+obj2.hr+(b/60);
    res.hr %= 12;
    return res;
}

int main()
{
    Time t1,t2,t3;
    cout<<" 12 Hour Clock!"<<endl<<endl;
    cout<<"Enter First time  : "<<endl;
    t1.SetTime();
    cout<<"Enter Second time : "<<endl;
    t2.SetTime();
    t3=t1+t2;
    cout<<"Summation of the inputted times : ";
    t3.show();
    return 0;
}
