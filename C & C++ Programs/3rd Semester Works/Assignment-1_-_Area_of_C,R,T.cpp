#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int ch;
    double a, b, c, s, l, r, area;
    cout<<"Choose Option : "<<endl<<"1. Area Of Circle"<<endl<<"2. Area Of Rectangle"<<endl<<"3. Area Of Triangle"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"Enter Radius : ";
                cin>>r;
                area = 3.14152*r*r;
                cout<<"The Area of the Circle is : "<<area<<" square units."<<endl;
        break;
        case 2: cout<<"Enter Length & Breadth : ";
                cin>>l>>b;
                area = l*b;
                cout<<"The Area of the Rectangle is : "<<area<<" square units."<<endl;
        break;
        case 3: cout<<"Enter the dimensions of the sides of triangle : ";
                cin>>a>>b>>c;
                s = (a+b+c)/2;
                area = sqrt(s*(s-a)*(s-b)*(s-c));
                cout<<"The Area of the Triangle is : "<<area<<" square units."<<endl;
        break;
        default: cout<<"Invalid Choice!!!";
        break;
    }
    return 0;
}
