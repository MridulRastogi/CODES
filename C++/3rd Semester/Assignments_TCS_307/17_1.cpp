#include<iostream>
using namespace std;

class DisFtIn;
class DisMtCm
{
    public:
        double mt, cm;
        void input()
        {
            cout<<"Enter the distance in   meters    : ";
            cin>>mt;
            cout<<"Enter the distance in centimeters : ";
            cin>>cm;
        }
        friend void summation(DisMtCm mc, DisFtIn fi);
};

class DisFtIn
{
    public:
        double ft, in;
        void input()
        {
            cout<<"Enter the distance in  feets : ";
            cin>>ft;
            cout<<"Enter the distance in inches : ";
            cin>>in;
        }
        friend void summation(DisMtCm mc, DisFtIn fi);
};

void summation(DisMtCm mc, DisFtIn fi)
{
    int meter, centimeter;
    meter      = (((mc.mt * 100) + mc.cm + (fi.ft * 30.48) + (fi.in * 2.54)) / 100);
    centimeter = (int)((mc.mt * 100) + mc.cm + (fi.ft * 30.48) + (fi.in * 2.54))%100;
    cout<<"The distance in meters and centimeters is : "<<endl;
    cout<<meter<<" mt. "<<centimeter<<" cm"<<endl;
}

int main()
{
    DisMtCm mc;
    DisFtIn fi;
    mc.input();
    fi.input();
    summation(mc,fi);
    return 0;
}
