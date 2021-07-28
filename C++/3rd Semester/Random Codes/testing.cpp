#include <iostream>
#include <cstring>
using namespace std;

class interA
{
public:
    virtual void countPalindrome(string );
    virtual void reverseWord(string);
};

class Result : public interA
{
public:

    void countPalindrome(string s)
    {
        string s1;
        int c=0;
        for(int i=0;i<s.length();++i)
        {
            if(s.at(i)!=32)
            {
                s1+=s.at(i);
            }
            else
            {
                int f=1;
                for(int j=0;j<s1.length()/2;++j)
                {
                    if(s1.at(j)!=s1.at(s1.length()-j-1))
                    {f=0;break;}
                }
                if(f==1)
                    c++;
                s1="";
            }
        }
        cout<<c<<endl;
    }

    void reverseWord(string s)
    {
        string s1="";
        for(int i=0;i<s.length();++i)
        {
            s1=s.at(i)+s1;
        }
        cout<<s1<<endl;
    }
};

int main()
{

    interA *bptr;
    Result ptr;
    string s;
    cout<<"\nThe Passing String is   :   ";
    getline(cin,s);
    bptr=&ptr;
    bptr->reverseWord(s);
    cout<<"\nThe Passing String is   :   ";
    getline(cin,s);
    bptr->countPalindrome(s);
    return 0;
}
