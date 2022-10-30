#include<bits/stdc++.h>
using namespace std;

int concatenatedBinary(int n)
{
	long ans=0, mod=1e9+7, length=0;
	for(int i=1; i<=n; i++)
    {
        if ((i&(i-1))==0)
        {
            length++;
            cout << i << " & " << i-1 << endl << "Length = " << length << endl;
        }
        int val = ans<<length;
        cout << ans << " << " << length << " = " << val << " + " << i << endl << endl;
		ans = ((ans << length) + i) % mod;
	}
	return ans;
}

int main()
{
	vector<int> vec = {3};
	for(int i:vec)
		cout << concatenatedBinary(i) << endl;
	return 0;
}
