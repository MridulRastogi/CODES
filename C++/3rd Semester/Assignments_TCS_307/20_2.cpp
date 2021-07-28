#include<iostream>
using namespace std;

class Vehicle
{
	public:
		void display()
        {
			cout<<"This is a Vehicle"<<endl;
		}
};

class Car: public Vehicle
{
	public:
		void display()
        {
			cout<<"This is a Car"<<endl;
		}
};

class Bike: public Vehicle
{
	public:
		void display()
        {
			cout<<"This is a Bike"<<endl;
		}
};

int main()
{
	int n;
	cout<<"Enter no of tyres : ";
	cin>>n;
	if(n==2)
    {
		Bike b;
		b.display();
	}
	else if (n==4)
    {
		Car c;
		c.display();
	}
	else
    {
		Vehicle v;
		v.display();
	}
	return 0;
}
