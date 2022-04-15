#include<bits/stdc++.h>
using namespace std;
bool result(int i, int j, int k, int ar[])
{
    int res1 = abs(ar[i]-ar[k]) + abs(ar[k]-ar[j]);
    int res2 = abs(ar[i]-ar[j]);
    if(res1==res2)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool flag = false;
    int t,n;
    scanf("%d", &t);
    while(t--)
    {
        flag = false;
        scanf("%d",&n);
        int ar[n];
        for(int i=0; i<n; i++)
            scanf("%d",&ar[i]); 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                flag = false;
                if((abs(ar[i]-ar[0]) + abs(ar[0]-ar[j])) == abs(ar[i]-ar[j]))
                {
                    int diff = abs(ar[i]-ar[j]);
                    for(int k=0; k<n; k++)
                    {
                        if( (abs(ar[i]-ar[k])+abs(ar[k]-ar[j]))==diff && (abs(ar[i]-ar[j])==diff) )
                            flag = true;
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag==true)
                {
                    cout << (i+1) << " " << (j+1) << endl;
                    break;
                }
            }
            if(flag==true)
                break;
        }   //nested for loop ends
    }   //while loop ends
    return 0;
}
