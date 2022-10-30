#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, num;
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

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(vec[i]>0 && vec[j]>0)
                {
                    if(vec[i] >= vec[j])
                    {
                        vec[i] = vec[i] - vec[j];
                        vec[j] = 0;
                    }
                    else if(vec[j] > vec[i])
                    {
                        vec[j] = vec[j] - vec[i];
                        vec[i] = 0;
                    }
                }
            }
        }
        int result = -1;
        for(int i=0; i<vec.size(); i++)
            if(vec[i]>0)
            {
                result = i+1;
                break;
            }
        if(result!=-1)
            cout << result << endl;
    }
    return 0;
}
