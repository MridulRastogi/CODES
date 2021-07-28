#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
        double m1,m2,m3,p;
        string name;
        char grade;
        int roll;
        void InputInfo()
        {
            cout<<"Enter Name : ";
            getline(cin,name);
            cout<<"Enter Roll Number : ";
            cin>>roll;
            cout<<"Enter marks in 3 Subjects : ";
            cin>>m1>>m2>>m3;
        }
        void CalcPercentage()
        {
            p = (m1+m2+m3)/3;
            if(p>=90)
                grade = 'A';
            else if(p>=80 && p<90)
                grade = 'B';
            else if(p>=60 && p<80)
                grade = 'C';
            else if(p>=40 && p<60)
                grade = 'D';
            else
                grade = 'F';
        }
        void Display()
        {
            cout<<endl<<"Name : "<<name;
            cout<<endl<<"Roll Number : "<<roll;
            cout<<endl<<"Marks in 3 Subjects : "<<m1<<" "<<m2<<" "<<m3;
            cout<<endl<<"Percentage : "<<p;
            cout<<endl<<"Grade : "<<grade<<endl;
        }
};
int main()
{
    Student st;
    st.InputInfo();
    st.CalcPercentage();
    st.Display();
    return 0;
}
