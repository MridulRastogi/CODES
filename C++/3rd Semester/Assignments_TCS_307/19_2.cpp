#include<iostream>
using namespace std;

class Temperature
{
    public:
        float temp;
        void setTempData(float t)
        {
            temp = t;
        }
        float value()
        {
            return temp;
        }
};

class Fahrenheit : public Temperature
{
    public:
        float ctemp;
        void changeTempFtoC(float t)
        {
            Temperature tp;
            tp.setTempData(t);
            float f = tp.value();
            ctemp = (5/9) * (f-32);
            cout<<f<<" degree Fahrenheit to degree Celsius = "<<ctemp<<endl;
        }
};

class Celsius : public Temperature
{
    public:
        float ftemp;
        void changeTempCtoF(float t)
        {
            Temperature tp;
            tp.setTempData(t);
            float c = tp.value();
            ftemp = ((9/5)*c) + 32;
            cout<<c<<" degree Celsius to degree Fahrenheit = "<<ftemp<<endl;
        }
};
+
int main()
{
    float  t;
    cout<<"Enter the Temperature : ";
    cin>>t;
    Fahrenheit f;
    Celsius c;
    f.changeTempFtoC(t);
    c.changeTempCtoF(t);
    return 0;
}
