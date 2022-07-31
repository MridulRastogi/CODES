#include<bits/stdc++.h>
using namespace std;

int toDecimal(char s[], int n)
{
    int sum = 0, num, c = 0;
    for(int i=n-1; i>=0; i--)
    {
        num = s[i] - 48;
        sum += ( int(pow(2,c)) *  num);
        c++;
    }
    return sum;
}

void flipBits(char s[], int n, int cash, int flip)
{
    int l = 0;
    while(l<n and (cash-flip)>=0)
    {
        if(s[l]=='1')
        {
            s[l] = '0';
            cash -= flip;
        }
        l++;
    }
}

int main()
{
    int n, cash, swap, flip;
    int noz=0, noo=0, result=0, l, r;
    cin >> n;
    char s[n];
    vector<int> zeroes;
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
        if(s[i]=='0')
        {
            zeroes.push_back(i);
            noz++;                  //number of zeroes
        }
    }
    noo = n-noz;                    //number of ones
    cin >> cash >> swap >> flip;

    if(noz==0)                     //if there are no zeroes
    {
        flipBits(s,n,cash,flip);
        result = toDecimal(s,n);
    }
    else if(noz==n)                //if the number of zereos is equal to the length of the string
    {
        result = 0;
    }
    else if(zeroes.size()>0)       //if the number of zeroes exist in the string
    {
        l = 0, r = zeroes.size()-1;
        while(l<=r and cash-swap>=0)
        {
            if(s[l]=='1' and r>=0)
            {
                if(s[r]=='0')
                {
                    s[l] = '0';
                    s[r] = '1';
                    r--;
                    cash -= swap;
                }
            }
            l++;
        }
        flipBits(s,n,cash,flip);
        result = toDecimal(s,n);
    }
    cout << "Result: " << result;
    return 0;
}
