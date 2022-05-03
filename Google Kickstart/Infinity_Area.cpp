#include<bits/stdc++.h>
using namespace std;
double compute_radius(vector<long int>& radius)
{
    float s=0.0;
    for(auto i:radius)
        s += 3.141592 * i * i;
    return s;
}
int main()
{
    int t;
    long int r,a,b;
    cin >> t;
    for(int z=1; z<=t; z++)
    {
        bool left = true;
        vector<long int> radius;
        cin >> r >> a >> b;
        radius.push_back(r);
        while(r>0)
        {
            if(left==true)
            {
                r = r*a;
                if(r>0)
                {
                    radius.push_back(r);
                    left = false;
                }
            }
            if(left==false)
            {
                r = r/b;
                if(r>0)
                {
                    radius.push_back(r);
                    left = true;
                }
            }
        }
        float s = compute_radius(radius);
        cout << "Case #" << z << ": " << fixed << setprecision(6) << s << endl;
    }
    return 0;
}
