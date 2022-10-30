#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>& vec, int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        cout << "  ";
        for(int j=0; j<cols; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

int maxProfit(int k, vector<int>& prices)
{
    if(prices.size()==0 or k==0)
        return 0;

    int n=prices.size();        // size of the prices vector
    vector<vector<int>> vec(k+1, vector<int> (n+1, 0));

    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<n; j++)
        {
            cout << " I => " << i << "  |  " << " J => " << j << "      ";
            int maxi = INT_MIN;
            for(int k=0; k<j; k++)
            {
                maxi = max( maxi, (prices[j]-prices[k] + vec[i-1][k]) );
                cout << " k->" << k << ", " << maxi << "  ";
            }
            vec[i][j] = max(vec[i][j-1], maxi);

            cout << endl;
            print(vec, k+1, n+1);
            cout << endl;
        }
    }

    return vec[k][n-1];

    // for(int i=0;i<=k;i++)       // initializing the first columns with zeroes
    //     a[i][0]=0;
    // for(int i=0;i<=n;i++)       // initializing the first row with zeroes
    //     a[0][i]=0;

    // for(int i=1; i<=k; i++)
    // {
    //     for(int j=1; j<n; j++)
    //     {
    //         int maxi = INT_MIN;
    //         for(int k=0; k<j; k++)
    //         {
    //             maxi = max( maxi, (prices[j]-prices[k] + a[i-1][k]) );
    //         }
    //         a[i][j] = max(a[i][j-1], maxi);
    //     }
    // }


    // return a[k][n-1];
}

int main()
{
    // vector<int> vec = {2, 4, 1};
    vector<int> vec = {3, 2, 6, 5, 0, 3};
    int k = 2;
    cout << "\n\n\nVECTOR : { ";
    for(int i:vec)
        cout << i << " ";
    cout << "}\n K => " << k << "\n\n\n";
    int result = maxProfit(k, vec);
    cout << endl << "  FINAL RESULT  =>  " << result << endl;
    return 0;
}
