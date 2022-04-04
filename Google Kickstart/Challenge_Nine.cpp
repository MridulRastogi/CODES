#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie();

    string s, s2;
    int t, z, num, ascii, sum, c, diff, l;
    cin>>t;
    for(z=1; z<=t; z++)
    {
        cin >> s;
        sum=0, c=0, l = s.length();
        for(int i=0; i<l; i++)
            sum += (s[i]-48);
        num = sum;
        while(num%9!=0)
        {
            num += 1;
            c++;
        }
        diff = num-sum;
        ascii = diff+48;
        vector<int> vec;
        s2 = char(ascii) + s;
        cout<<s2<<endl;
        vec.push_back(stoi(s2));
        s2 = s + char(ascii);
        cout<<s2<<endl;
        vec.push_back(stoi(s2));

        if(l>1)
            for(int i=0; i<l-1; i++)
            {
                s2 = s.substr(0,i) + char(ascii) + s.substr(i,l);
                cout<<s2<<endl;
                vec.push_back(stoi(s2));
            }
        sort(vec.begin(), vec.end());
        cout << "Case #" << z << ": " << vec[0] << endl;
    }
    return 0;
}
