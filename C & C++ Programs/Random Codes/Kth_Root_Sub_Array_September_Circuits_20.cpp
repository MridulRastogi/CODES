#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
void string_to_integer (unsigned long long int b[], string s)
{
    int c,l,i;
    c = 0;
    s = s + ' ';
    l = s.length();
    string s2="";
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
            s2 = s2 + s[i];
        else
        {
            b[c] = std::stoi(s2);
            c++;
            s2="";
        }
    }
}

unsigned long long int product (unsigned long long int a[], unsigned long long int l, unsigned long long int r)
{
    unsigned long long int p = 1;
    int i;
    for(i=l-1;i<r;i++)
        p = p * a[i];
    return p;
}

int check_subarray (unsigned long long int p, unsigned long long int k)
{
    unsigned long long int power;
    int i,least,c=0;
    least = p/k;
    for(i=1;i<=least;i++)
    {
        if(p%i==0)
        {
            power = pow(i,k);
            if(power==p)
            {
                c=1;
                return c;
                break;
            }
        }
    }
    if(c==0)
        return 0;
}

int main()
{
	unsigned long long int n,k,q,l,r,p,x,y,power;
	int i,c;
	string s;
	cin>>n>>k>>q;
	unsigned long long int a[n],b[5];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin.ignore();
	while(q--)
	{
	    unsigned long long int b[5]={NULL};
        c=0;
		getline(cin,s);

		string_to_integer(b,s);
		for(i=0;i<5;i++)
            if(b[i]!=NULL)
                c++;
        if(c==3)
        {
            l = b[1];
            r = b[2];
            //cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<"\t";
            p = product(a,l,r);
            if(check_subarray(p,k)==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(c==5)
        {
            l = b[1];
            r = b[2];
            x = b[3];
            y = b[4];
            //cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4]<<"\t";
            power = pow(x,y);
            for(i=l-1;i<=r-1;i++)
                a[i] = a[i] * power;
            //p = product(a,l,r);
            /*if(check_subarray(p,k)==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;*/
        }
        else if(c==4)
        {
            l = b[1];
            r = b[2];
            x = b[3];
            //cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<"\t";
            for(i=l-1 ; i<=r-1 ; i++)
                a[i] = x;
            //p = product(a,l,r);
            /*if(check_subarray(p,k)==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;*/
        }
	}
	return 0;
}
