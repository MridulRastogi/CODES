#include<iostream>
#include<string>
using namespace std;
int main()
{
    int m=1;
    cout<<"Enter 1 to CONTINUE and 0 to EXIT."<<endl;
    do
    {
        int n;
        cin>>n;
        switch(n)
        {
            case 0: m=2;
            break;
            case 1: int i,l,ec,ch;
                    string s,s2="";
                    cin.ignore();
                    cout<<"Enter the String : ";
                    getline(cin,s);
                    l = s.length();
                    cout<<"Enter the Encryption Key : ";
                    cin>>ec;
                    ec = ec%26;
                    for(i=0;i<l;i++)
                    {
                        ch = (int)s[i];
                        if((ch>=65  && ch<=(90-ec)) || (ch>=97  && ch<=(122-ec)))
                            ch=ch+(ec);
                        else if((ch>(90-ec) && ch<=90) || (ch>(122-ec) && ch<=122))
                            ch=ch-(26-ec);
                        s2.push_back((char)ch);
                    }
                    cout<<"Encrypted String : "<<s2<<endl;
            break;
        }
    }
    while(m==1);
    return 0;
}
