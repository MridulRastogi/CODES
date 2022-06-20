#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int t, n, num, q, l, r, x, y, res;
     cin >> t;
     while(t--)
     {
         cin >> n;
         vector<int> vec;
         for(int i=0; i<n; i++)
         {
             cin >> num;
             vec.push_back(num);
         }
         cin >> q;
         int ar[q][4];
         for(int i=0; i<q; i++)
            cin >> ar[i][0] >> ar[i][1] >> ar[i][2] >> ar[i][3];
         for(int i=0; i<q; i++)
         {
             l = ar[i][0];
             r = ar[i][1];
             x = ar[i][2];
             y = ar[i][3];
             if(l==r)
                res = vec[l-1];
            else
            {
                vector<int> v;
                int s=0;
                for(int i=l-1; i<r; i++)
                    v.push_back(vec[i]);
                sort(v.begin(), v.end());
                for(int j=0; j<x; j++)
                    s += v[j];
                res = s;
            }
            cout << res << " ";
         }
         cout << endl;
     }
     return 0;
 }
