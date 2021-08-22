#include<iostream>
using namespace std;
int main()
{
    int t,z,r,r1,r2,c,c1,c2,k,cutr,cutc;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        cin >> r >> c >> k >> r1 >> c1 >> r2 >> c2;
        cutr = ((r-r1)>(r-r2)) ? r2 : r1;
        cutc = ((c-c1)>(c-c2)) ? c2 : c1;
        cout<<cutr<<" "<<cutc<<endl;
    }
    return 0;
}
