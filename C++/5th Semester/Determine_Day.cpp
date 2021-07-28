#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,y,day_number,i,month,c=0,year,num;
    string m;
    cout<<"Enter the Date  : ";
    cin>>d;
    cout<<"Enter the Month : ";
    cin>>m;
    cout<<"Enter the year  : ";
    cin>>y;
    transform(m.begin(), m.end(), m.begin(),::tolower);
    string months[] = {"march","april","may","june","july","august","september","october","november","december","january","february"};
    string day[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    for(i=0 ; i<int(sizeof(months)/sizeof(months[0])) ; i++)
        if(m==months[i])
        {
            cout<<d<<"th "<<m<<" "<<y<<endl;
            month = i+1;
            while(num)
            {
                c++;
                num=num/10;
            }
            if(month==11 || month==12)
                year = int(y%int(pow(10,c/2)))-1;
            else
                year = int(y%int(pow(10,c/2)));
            day_number = d + [(13*month)/5] + year + int(year/4) + int((y/int(pow(10,c/2)))/4) - int(2*(y/int(pow(10,c/2))));
            cout<<"The day was : "<<day[(day_number%7)+1]<<endl;
            break;
        }
        else
            cout<<"invalid Month"<<endl;
    return 0;
}

/*
day_number = d + [(13month)/5] + year + (year/4) + ((y/int(pow(10,c/2)))/4) - (2(y/int(pow(10,c/2))));
| ^
D:\Atom\CODES\C++\5th Semester\Determine_Day.cpp: In lambda function:
*/
