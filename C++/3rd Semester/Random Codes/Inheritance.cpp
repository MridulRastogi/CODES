#include<iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout<<"I am vehicle of Base Class"<<endl;
    }
    void travel()
    {
        cout<<"I travel."<<endl;
    }
};
class Car: public Vehicle
{
public:
    Car()
    {
        cout<<"I am Car of Derived Class"<<endl;
    }
};
class Bus: public Vehicle
{
public:
    Bus()
    {
        cout<<"I am Bus of Derived Class"<<endl;
    }
};

int main()
{
    Vehicle v;
    v.travel();
    cout<<endl;
    Car c;
    c.travel();
    cout<<endl;
    Bus b;
    b.travel();
    return 0;
}

/*
* We generally use Public mode, but by default it is Private Mode
Syntax: //  class <Derived Class> : <access specifier> <Base Class>
            class Car : public/private/protected Vehicle
        By default private is the access specifier
* To derive multiple classes :
    class derived : accessmode baseclass1, accessmode baseclass2
* Principles Of Least Privilages :
Access
Modes:        Data Members ->
  BASE        PUBLIC    PROTECTED   PRIVATE
  PUBLIC      public    protected   Hidden in Derived Class
  PROTECTED   protected protected   Hidden in Derived Class
  PRIVATE     private   private     Hidden in Derived Class
*/
