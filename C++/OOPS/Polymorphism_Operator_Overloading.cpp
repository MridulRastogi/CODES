#include<bits/stdc++.h>
using namespace std;
class OperatorOverloading                               // CPP program to illustrate Operator Overloading
{
    private:
	       int real, imag;
       public:
           OperatorOverloading(int r = 0, int i = 0)
           {
               real = r;
               imag = i;
           }
           // This is automatically called when '+' is used between two Complex objects
           OperatorOverloading operator + (OperatorOverloading const &obj)
           {
               OperatorOverloading res;
               res.real = real + obj.real;
               res.imag = imag + obj.imag;
               return res;
           }
           void print()
           {
                cout << real << " + i" << imag << endl;
           }
};

int main()
{
	OperatorOverloading c1(10, 5);
    OperatorOverloading c2(2 , 4);
	OperatorOverloading c3 = c1 + c2;         // An example call to "operator+"
	c3.print();
    return 0;
}
