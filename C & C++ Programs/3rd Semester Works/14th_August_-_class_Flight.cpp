#include<iostream>
using namespace std;
class Flight
{
private:
    int flight_no;
    string dest;
    float dist, fuel;
public:
    void FEEDINFO()
    {
        cout<<"Enter Flight Number : ";
        cin>>flight_no;
        cin.ignore();
        cout<<"Enter Destination : ";
        getline(cin,dest);
        cout<<"Enter Distance : ";
        cin>>dist;
        cout<<endl;
    }
    void CALFUEL()
    {
        if(dist<1000)
            fuel = 500;
        else if(dist>1000 && dist<=2000)
            fuel = 1100;
        else if(dist>2000)
            fuel = 2200;
    }
    void SHOWINFO()
    {
        cout<<"Flight Number : "<<flight_no<<endl;
        cout<<"Destination : "<<dest<<endl;
        cout<<"Distance : "<<dist<<endl;
        cout<<"Fuel Required : "<<fuel<<endl;
    }
};
int main()
{
    Flight fl;
    fl.FEEDINFO();
    fl.CALFUEL();
    fl.SHOWINFO();
    return 0;
}
