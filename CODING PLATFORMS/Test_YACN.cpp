#include<bits/stdc++.h>
using namespace std;

string binary(int n)
{
	int num = n, r;
	string s = "";
	while(num>0)
	{
		r = num%2;
		s = to_string(r) + s;
		num = num/2;
	}
	return s;
}

int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
    	int res = 0;
    	for(int i = a+1; i<=b; i++)
    		res = res^i;
    	cout << res << endl;
    	string result = binary(res);
        cout << result << endl;
    }
	return 0;
}

/*
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

string binary(long long n)
{
	long long num = n, r;
	string s = "";
	while(num>0)
	{
		r = num%2;
		s = to_string(r) + s;
		num = num/2;
	}
	return s;
}

long long getTrailingZeroes(string s)
{
    long long counter=0;
    for(long long i=s.length()-1; i>=0; i--)
        if(s[i]=='0')
            counter++;
        else
            break;
    return counter;
}

void solve()
{
    long long a, b, i, num=0, result, mod=1e9+7;
    cin >> a >> b;
    for(i=a+1; i<=b; i++)
        num = num^i;
    string bin = binary(num);
    result = getTrailingZeroes(bin);
    cout << result << endl;
}

int main()
{
    FAST;
    long long t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
*/
