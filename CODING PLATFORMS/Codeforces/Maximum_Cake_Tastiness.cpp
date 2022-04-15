#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t, s, n, num;
    cin >> t;
    while(t--)
    {
        s=0;
        cin >> n;
        priority_queue<long int> pq;
        for(int i=0; i<n; i++)
        {
            cin>>num;
            pq.push(num);
        }
        if(pq.size()<=2)
        {
            while(!pq.empty())
            {
                s += pq.top();
                pq.pop();
            }
        }
        else
        {
            s += pq.top();
            pq.pop();
            s += pq.top();
        }
        cout << s << endl;
    }
    return 0;
}
