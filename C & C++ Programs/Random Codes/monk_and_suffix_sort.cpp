#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,temp;
	int i,j,n,l;
	cin>>s>>n;
    l = s.length();
    string a[l];
    for(i=0;i<l;i++)
        a[i] = s.substr(i,l);

    for(i=0;i<l-1;i++)
        for(j=0;j<l-i-1;j++)
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

    cout<<a[n-1]<<endl;
    return 0;
}
