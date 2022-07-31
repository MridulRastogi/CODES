#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e, n, num, c=0, count=0;
    bool flag = true;
    cin >> e >> n;
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    while(e!=0 && flag==true)
    {
        if((e-(2*vec[c])) >=0)
        {
            e -= (2*vec[c]);
            count += 2;
        }
        else if(e-vec[c] >=0)
        {
            e -= vec[c];
            count++;
        }
        c++;
        if(c==vec.size())
            flag = false;
    }
    if(e<=0)
        cout << "The total number of exercises that can be performed are: " << count << endl;
    else
        cout << -1 << endl;
    return 0;
}
