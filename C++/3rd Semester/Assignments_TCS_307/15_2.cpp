#include<iostream>
using namespace std;

class UserTwo;
class UserOne
{
    string Name;
	string FatherName;
	string MotherName;
	string Gender;
    public:
        void InputInfo()
        {
            cout<<"Enter your name : ";
            getline(cin,Name);
            cout<<"Enter father's name : ";
            getline(cin,FatherName);
            cout<<"Enter mother's name : ";
            getline(cin,MotherName);
            cout<<"Enter gender : ";
            getline(cin,Gender);
            cout<<endl;
        }
        friend void UserChecker(UserOne o, UserTwo t);
};

class UserTwo
{
        string Name;
		string FatherName;
		string MotherName;
		string Gender;
        public:
		void InputInfo()
        {
            cout<<"Enter your name : ";
            getline(cin,Name);
            cout<<"Enter father's name : ";
            getline(cin,FatherName);
            cout<<"Enter mother's name : ";
            getline(cin,MotherName);
            cout<<"Enter gender : ";
            getline(cin,Gender);
            cout<<endl;
        }
        friend void UserChecker(UserOne o,UserTwo t);
};

void UserChecker(UserOne o, UserTwo t)
{
    if(o.FatherName == t.FatherName && o.MotherName == t.MotherName)
    {
        cout<<"Belongs to same family."<<endl;
        if(o.Name==t.Name)
            cout<<"You are the same person."<<endl;
        else if(o.Gender==t.Gender && (o.Gender[0]=='M' || o.Gender[0]=='m'))
            cout<<"You are Brothers."<<endl;
        else if(o.Gender==t.Gender && (o.Gender[0]=='F' || o.Gender[0]=='f'))
            cout<<"You are Sisters."<<endl;
        else if(o.Gender!=t.Gender)
            cout<<"You are brother and sister."<<endl;
    }
    else
        cout<<"Belongs to Different Family."<<endl;
}

int main()
{
    UserOne uo;
    UserTwo ut;
    uo.InputInfo();
    ut.InputInfo();
    UserChecker(uo,ut);
    return 0;
}
