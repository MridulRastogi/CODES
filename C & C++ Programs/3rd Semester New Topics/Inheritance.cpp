#include<iostream>
using namespace std;

class Vehicle
{

};

int main()
{

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
/*
    Different Types of Inheritance :
    1. Single Level Inheritance
        class A
        {};
        class B : <access specifier> A
        {};
        <access specifier> = public, protected, private

    2. Multi Level Inheritance
        class A
        {};
        class B : <access specifier> A
        {};
        class C : <access specifier> B
        {};

    3. Multiple Inheritance
        class A
        {};
        class B
        {};
        class C : <access specifier> A, <access specifier> B
        {};

    4. Hierarchial Inheritance
        class A
        {};
        class B : <access specifier> A
        {};
        class C : <access specifier> A
        {};

    5. Hybrid Inheritance

*/
/*
VISIBILITY MODES IN INHERITANCE :
PRIVATE   :
PUBLIC    :
PROTECTED : (features/properties/function) -> members i.e.
            The derived class can access the protected members but they are not accessible to outside world.
            (directly we can't access protected members with the object)

SPECIFIERS IN       WITHIN   DERIVED   OUTSIDE
BASEE CLASS         CLASS    CLASS     CLASS
Private               YES     NO        NO
Protected             YES     YES       NO
Public                YES     YES       YES


*/
