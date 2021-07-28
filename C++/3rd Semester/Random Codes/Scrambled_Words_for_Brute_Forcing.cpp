#include<iostream>
using namespace std;

 void permute(string a, int s, int e)
 {
     if(s==e)
        cout<<a<<endl;
     else
        for(int i=s;i<e;i++)
        {
            swap(a[s],a[i]);
            permute(a,s+1,e);
            swap(a[s],a[i]);
        }
 }

void swap(char a, char b)
{
    char ch;
    ch = a;
    a = b;
    b = ch;
}

 int main()
 {
     int i;
     string s;
     cout<<"Enter a word : ";
     getline(cin,s);
     permute(s,0,s.length());
     return 0;
 }
