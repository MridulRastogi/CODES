#include<bits/stdc++.h>
using namespace std;

int result(int i, int pos, int num)
{
    if(pos == num-1)
        return 1;
    int ans = 0;
    for(int j=i; j<=9; j++)
    {
        ans = ans + result(j, pos+1, num);
        //cout << "Result("<<j<<", "<<pos<<", "<<num<<") : "<<ans<<endl;
    }
    return ans;
}

int main()
{
    int n, num, ans=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        for(int j=0; j<=9; j++)
        {
            ans = ans + result(j, 0, num);
            //cout << "MAIN FUNCTION: Result(" << j << " ,0 ," << num << ") : " << ans << endl;
        }
    }
    cout << ans;
    return 0;
}
