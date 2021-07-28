#include<iostream>
using namespace std;
int main()
{
    double c,f;
    int ch;
    cout<<"1. Celsius to Fahrenheit"<<endl<<"2. Fahrenheit to Celsius"<<endl<<"Choose the option : ";
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"Enter Temperature in Celsius : ";
                cin>>c;
                f = 1.8*c+32;
                cout<<"In Fahrenheit : "<<f;
        break;
        case 2: cout<<"Enter Temperature in Fahrenheit : ";
                cin>>f;
                c = (f-32)*0.5555555555555555555556;
                cout<<"In Celsius : "<<c;
        break;
        default: cout<<"Invalid Option";
        break;
    }
    return 0;
}
