#include<iostream>
using namespace std;
class TollBooth
{
    public:
        int cars;
        double money;
        TollBooth()
        {
            cars=0;
            money=0;
        }
        void payingcar()
        {
            cars++;
            money = money + 0.5;
        }
        void nonPayCar()
        {
            cars++;
        }
        void display()
        {
            cout<<"Details : "<<endl;
            cout<<"Car Total : "<<cars<<endl;
            cout<<"Money Total : "<<money<<endl;
        }
};
int main()
{
    TollBooth tl;
    char ch;
    cout<<"Choose Options as per your choice : "<<endl;
    cout<<"1. Press 'P' 'p' for Paying Cars"<<endl;
    cout<<"2. Press 'N' for Non Paying Cars"<<endl;
    cout<<"3. Press 'E' for Displaying Data"<<endl;
    while(ch!='E')
    {
        cin>>ch;
        switch(ch)
        {
            case 'P':   tl.payingcar();
            break;
            case 'N':   tl.nonPayCar();
            break;
            case 'E':   tl.display();
            break;
            default: cout<<"Invalid Choice"<<endl;
            break;
        }
    }
    return 0;
}
