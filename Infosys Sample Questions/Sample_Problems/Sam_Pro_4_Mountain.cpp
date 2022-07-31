#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n], br[n];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
    }

    if(n%2==1)
    {
        int mid = n/2;
        int l=0, r=n-1;
        int changes_first = 0, changes_second = 0;

        while(l!=r)
        {
            if(ar[l] != ar[r])
            {
                if(ar[l]+1 == ar[l+1])
                    ar[r] = ar[l];
                else if(ar[r]+1 == ar[r-1])
                    ar[r] = ar[l];
                else
                {
                    ar[l+1] = ar[l]+1;
                    ar[r-1] = ar[l+1];
                }
                changes++;
            }
            l++;
            r--;
        }
        //ar[mid] = ( ar[mid] == ar[mid-1]+1 ? ar[mid] : (ar[mid-1]+1) );
        if(ar[mid] != ar[mid-1]+1)
            ar[mid] = ar[mid-1]+1;

        l = r = mid;
        while(l>=0 and r<n)
        {
            if(ar[l] != ar[r])
            {
                if(ar[l] != ar[l-1]+1)
                {
                    ar[l-1] = ar[l]-1;
                    ar[r+1] = ar[l-1];
                }
            }
            l--;
            r++;
        }

    }

    int mid = n/2;
    if(n%2==0)
    {
        int m1 = mid - 1;
        int m2 = mid;
        int Ltr=1, Rtl=1;

        for(int i=0; i<m1; i++)
            if(ar[i] == (ar[i+1]+1))
                Ltr++;
        for(int i=n-1; i>m2; i--)
            if(ar[i] == (ar[i-1]+1))
                Rtl++;
        if()
    }
    return 0;
}

/*

5
1 2 3 4 5
Output: 2

9
1 1 1 2 3 2 1 1 1
Output: 4

6
3 4 5 5 4 3 => 4
3 3 4 5 5 5 => Original
2 3 4 4 3 2 => 4

Output: 3
mid = 3
ltr = 2
rtl = 1

*/
