#include<iostream>
#include<math.h>
using namespace std;

double distance(int x, int y, int bx, int by)
{
    double dis = sqrt((pow((x-bx),2)+pow((y-by),2)));
    return dis;
}

int main()
{
    int i,t,z,n;
    cin>>t;
    for(z=1; z<=t; z++)
    {
        cin>>n;
        double a[n][n], bsx, bsy;
        double dist;
        for(i=0; i<n; i++)
            cin >> a[i][0] >> a[i][1];
        cin>>bsx>>bsy;
        if(n==2)
            cout<<"Case #"<<z<<": IMPOSSIBLE"<<endl;
        else if(n==3)
        {
            double peri = distance(a[0][0], a[0][1], a[1][0], a[1][1]) +
                          distance(a[1][0], a[1][1], a[2][0], a[2][1]) +
                          distance(a[0][0], a[0][1], a[2][0], a[2][1]) ;
            printf("Case #%d: %.6f\n", z,peri);
        }
        else
        {
            double dist, min=1000000, fminx, fminy, sminx, sminy, tminx, tminy;
            for(i=0; i<n; i++)                      //calculated first minx and miny
            {
                dist = distance(a[i][0], a[i][1], bsx, bsy);
                if(dist<min)
                {
                    cout<<dist<<" ";
                    min = dist;
                    fminx = a[i][0];
                    fminy = a[i][1];
                }
            }
            min = 10000000;
            for(i=0; i<n; i++)                      //calculated first minx and miny
            {
                if(a[i][0]!=fminx && a[i][1]!=fminy)
                {
                    dist = distance(a[i][0], a[i][1], bsx, bsy);
                    if(dist<min)
                    {
                        cout<<dist<<" ";
                        min = dist;
                        sminx = a[i][0];
                        sminy = a[i][1];
                    }
                }
            }
            min = 1000000;
            for(i=0; i<n; i++)                      //calculated first minx and miny
            {
                if((a[i][0]!=fminx && a[i][1]!=fminy) || (a[i][0]!=sminx && a[i][1]!=sminy))
                {
                    dist = distance(a[i][0], a[i][1], bsx, bsy);
                    if(dist<min)
                    {
                        cout<<dist<<" ";
                        min = dist;
                        tminx = a[i][0];
                        tminy = a[i][1];
                    }
                }
            }
            double per = distance(fminx,fminy, sminx,sminy)+
                         distance(sminx,sminy, tminx,tminy)+
                         distance(tminx,tminy, fminx,fminy);
            printf("Case #%d: %.6f\n", z,per);
        }
    }
    return 0;
}
