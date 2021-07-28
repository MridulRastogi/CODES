#include<iostream>
#include<string>
using namespace std;
class Outer     //outer class begins
{
    string name;
    public:
        class Inner     //inner class begins
        {
            int roll;
            public:
                void setRoll()
                {
                    cout<<"Enter the Roll Number : ";
                    cin>>roll;
                    cin.ignore();
                }
                void showRoll()
                {
                    cout<<"The Roll Number is : "<<roll<<endl;
                }
        };//inner class completed
    public:
        void setName()
        {
            cout<<"Enter the name : ";
            getline(cin,name);
        }
        void showName()
        {
            cout<<"The name is : "<<name;
        }
};//outer class completed
int main()
{
    Outer ou;
    Outer::Inner io;
    io.setRoll();
    io.showRoll();
    ou.setName();
    ou.showName();
    return 0;
}
