#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct Student
{
    string name;
    int rollno;
    char gender;
};

int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    Student s[n];
    int i;

    for(i=0; i<n; i++)
    {
        cout<<"Enter Name: ";
        cin>>s[i].name;
        cout<<"Enter Roll No.: ";
        cin>>s[i].rollno;
        cout<<"Enter Gender: ";
        cin>>s[i].gender;
    }
    for(i=0; i<n; i++)
        cout<<i+1<<") "<<s[i].rollno<<" - "<<s[i].gender<<" - "<<s[i].name<<endl;
    return 0;
}

/*
typedef
*/
