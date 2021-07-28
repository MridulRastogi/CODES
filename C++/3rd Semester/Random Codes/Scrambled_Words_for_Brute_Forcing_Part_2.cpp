#include<iostream>
#include<string>
using namespace std;
void swap(char a,char b){ char ch; ch=a; a=b; b=ch; }
int main()
{
    string s;
    int i,c=0,start=0,l,p=1;
    cout<<"Enter a word : ";
    getline(cin,s);
    l = s.length();
    for(i=1;i<=l;i++)
        p=p*i;
    do
    {

    }
    while(c<=p);

    for(i=0;i<l;i++)
    {

    }
    return 0;
}
