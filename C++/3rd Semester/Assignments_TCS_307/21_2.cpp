#include<iostream>
using namespace std;

class Student
{
    public:
        int age, marks, enroll_no;
        string name;
    void get()
    {
        cout<<"Enter the Student Details : "<<endl;
        cout<<"Enter Name  : ";
        getline(cin,name);
        cout<<"Enter Age   : ";
        cin>>age;
        cout<<"Enter Marks : ";
        cin>>marks;
        cout<<"Enter Enrollment Number : ";
        cin>>enroll_no;
    }
    void display()
    {
        cout<<endl<<"\t Student Details"<<endl<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Enrollment Number : "<<enroll_no<<endl<<endl;
    }
};

class Faculty
{
    public:
        int facultyCode, salary, age;
        string facultyName, gender, deptt, experience;
    void get()
    {
        cin.ignore();
        cout<<endl<<"Enter the Faculty Details : "<<endl;
        cout<<"Enter Name : ";
        getline(cin,facultyName);
        cout<<"Enter Age  : ";
        cin>>age;
        cout<<"Enter Code : ";
        cin>>facultyCode;
        cin.ignore();
        cout<<"Enter Gender : ";
        getline(cin,gender);
        cout<<"Enter Department : ";
        getline(cin,deptt);
        cout<<"Enter Experience : ";
        getline(cin,experience);
        cout<<"Enter Salary : ";
        cin>>salary;
    }
    void display()
    {
        cout<<"\t Faculty Details"<<endl<<endl;
        cout<<"Name : "<<facultyName<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Code : "<<facultyCode<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Department : "<<deptt<<endl;
        cout<<"Experience : "<<experience<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

class Person : public Student, public Faculty
{

};

int main()
{
    Person obj;
    obj.Student::get();
    obj.Faculty::get();
    obj.Student::display();
    obj.Faculty::display();
    return 0;
}

/*
Denver
29
97
4071139
Rio
22
407
Male
Computer Science
12 years
100000
*/
