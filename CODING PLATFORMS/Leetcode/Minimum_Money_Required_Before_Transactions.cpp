#include<bits/stdc++.h>
using namespace std;

long long minimumMoney(vector<vector<int>>& transactions)
{
    long long cost, cashback, losing_money = 0, current_money = 0, less, diff;
    long long result;

    for(int i=0; i<transactions.size(); i++)
    {
        cost     = transactions[i][0];
        cashback = transactions[i][1];

        less          = (cost <= cashback      ? cost : cashback     );
        current_money = (less >= current_money ? less : current_money);

        diff         = cost - cashback;
        losing_money += (diff >= 0 ? diff : 0);

        // current_money = max(current_money, min(cost, cashback));
        // losing_money += max(0, cost-cashback);
    }

    result = current_money + losing_money;
    return result;
}

int main()
{
    vector<vector<int>> vec = {{2,1},{3,4},{5,0},{4,2},{4,5}};
    long long result = minimumMoney(vec);
    cout << result;
    return 0;
}












// int compare(pair<int, int>& a, pair<int, int>& b)
// {
//     if(a.first > b.first)
//         return a.first;
//     return b.first;
// }
//
// void print(vector<pair<int, int>>& vec)
// {
//     for(int i=0; i<vec.size(); i++)
//         cout << vec[i].first << " " << vec[i].second << endl;
//     cout << endl;
// }
//
// long long minimumMoney(vector<vector<int>>& transactions)
// {
//     ll result = 0;
//     vector<pair<int, int>> cbgc, cblc;
//     /*
//         cbgc => pair_of ( cost , cashback )     SORTED IN DESCENDING ORDER OF COSTS
//         cblc => pair_of ( cashback , cost )     SORTED IN ASCENDING ORDER OF CASHBACKS
//     */
//
//     for(int i=0; i<transactions.size(); i++)
//     {
//         if(transactions[i][1] >= transactions[i][0])
//             cbgc.push_back(make_pair(transactions[i][0], transactions[i][1]));
//         else
//             cblc.push_back(make_pair(transactions[i][1], transactions[i][0]));
//     }
//     sort(cbgc.rbegin(), cbgc.rend());
//     print(cbgc);
//     sort(cblc.begin(), cblc.end());
//     print(cblc);
//
//     return result;
// }
