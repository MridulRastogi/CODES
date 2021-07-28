#include<iostream>
using namespace std;

class tollbooth
{
    public:
        int cars;
        double money;
        tollbooth()
        {
            cars = 0;
            money = 0.0;
        }
        void payingCar()
        {
            cars = cars + 1;;
            money = money + 0.5;
        }
        void nonPayCar()
        {
            cars = cars + 1;
            money = money;
        }
        void display()
        {
            cout<<"\tDetails"<<endl;
            cout<<"Number of Cars = "<<cars<<" cars"<<endl;
            cout<<"    Cash Total = Rs."<<money<<endl;
        }
};

int main()
{
    char ch;
    cout<<"Enter P to count a paying car"<<endl;
    cout<<"Enter N to count a non paying car"<<endl;
    cout<<"Enter E to exit and display the details"<<endl<<endl;
    cin>>ch;
    tollbooth t;
    while(ch=='P' || ch=='N')
    {
        if(ch=='P')
            t.payingCar();
        else if(ch=='N')
            t.nonPayCar();
        cin>>ch;
    }
    t.display();
    return 0;
}
