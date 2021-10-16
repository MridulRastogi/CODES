#include<iostream>
#include<vector>
using namespace std;

string shiftingLetters(string s, vector<int> &shifts)
{
    cout<<"String Entered: "<<s<<endl;
    cout<<"Shifts Vector Entered: ";
    for(int i=0 ; i<shifts.size() ; i++)
        cout << shifts[i] << " ";
    cout<<endl;
    int i,j,ascii;
    int ls = s.length();
    //int lv = shifts.size();
    string s2 = "";
    cout<<"ini  aad  aed"<<endl;
    for(i=0; i<ls; i++)
    {
        for(j=0; j<=i; j++)
        {
            ascii = int(s[j]);
            cout<<ascii<<" ";
            ascii = ascii + shifts[i];
            cout<<ascii<<" ";
            if(ascii>122)
                ascii = 96+(ascii-122);
            cout<<ascii<<" "<<s[j]<<endl;
            s2  += char(ascii);
        }
        cout<<endl;
        if(i<ls)
            for(j=i+1; j<ls; j++)
                s2 = s2 + s[j];
        s = s2;
        s2 = "";
    }
    return s;   
}


int main()
{
    vector<int> shifts;
    int n,num;
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    n = s.length();
    cout<<"Enter the shifts: ";
    for(int i=1; i<=n;i++)
    {
        cin>>num;
        shifts.push_back(num);
    }

    string S;
    S = shiftingLetters(s,shifts);
    cout<<S;
    return 0;
}
/*
aaaaaaaaaaaaaaaaaaaaaaaaaa
abcdefghijklmnopqrstuvwxyz
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
*/
