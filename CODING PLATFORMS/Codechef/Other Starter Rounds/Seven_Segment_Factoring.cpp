#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void allocate(vector<int>& vec, int a, int b, int c, int d, int e, int f, int g)
{
    for(int i=0; i<=9; i++)
    {
        if(i==0)
            vec[i] = a+b+c+d+e+f;
        else if(i==1)
            vec[i] = b+c;
        else if(i==2)
            vec[i] = a+b+g+e+d;
        else if(i==3)
            vec[i] = a+b+c+d+g;
        else if(i==4)
            vec[i] = f+g+b+c;
        else if(i==5)
            vec[i] = a+c+d+f+g;
        else if(i==6)
            vec[i] = a+c+d+e+f+g;
        else if(i==7)
            vec[i] = a+b+c;
        else if(i==8)
            vec[i] = a+b+c+d+e+f+g;
        else if(i==9)
            vec[i] = a+b+c+d+f+g;
    }
}

int compute(vector<int>& vec, int num)
{
    int temp = num, r, s=0;
    while(temp>0)
    {
        r = temp%10;
        s += vec[r];
        temp /= 10;
    }
    return s;
}

void solve()
{
    int n, a, b, c, d, e, f, g, minimum=INT_MAX;
    cin >> n >> a >> b >> c >> d >> e >> f >> g;
    vector<int> vec(9);
    allocate(vec, a, b, c, d, e, f, g);
    for(int i=1; i<=100; i++)
    {
        if(n%i==0)
        {
            int num = compute(vec, i);
            minimum = min(minimum, num);
        }
    }
    cout << minimum << endl;
}

int main()
{
    FAST;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
