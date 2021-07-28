#include<iostream>
using namespace std;
//Outer Class Starts
class Student
{
    private:
        int admno;
        char sname[20];
        //Inner Class Starts
        class Student_Marks
        {
            private:
                float eng, math, science, computer_science, hindi, total;
            public:
                void sMarks()
                {
                    cin.ignore();
                    cout<<"Enters the marks of the respective subjects : "<<endl;
                    cout<<"English : ";
                    cin>>eng;
                    cout<<"Maths : ";
                    cin>>math;
                    cout<<"Science : ";
                    cin>>science;
                    cout<<"Computer Science : ";
                    cin>>computer_science;
                    cout<<"Hindi : ";
                    cin>>hindi;
                }
                float cTotal()
                {
                    total = eng + math + science + computer_science + hindi;
                    return total;
                }
        }in;
        //Inner Class Ends
    public:
        void readData()
        {
            cout<<"Enter Admission Number : ";
            cin>>admno;
            cout<<"Enter Name : ";
            cin>>sname;
            in.sMarks();
        }
        void showData()
        {
            cout<<endl<<"Name             : "<<sname<<endl;
            cout<<"Admission Number : "<<admno<<endl;
            cout<<"Total Marks      : "<<in.cTotal()<<endl;
        }
};
//Outer Class Ends
int main()
{
    Student st;
    st.readData();
    st.showData();
    return 0;
}
