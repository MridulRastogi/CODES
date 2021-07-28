#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<string.h>
#include<windows.h>
void main()
{
    int n,i,j,k;
    float mx[10],my[10],x,x0=0,y0,sum,h,fun,p,diff[20][20],y1,y2,y3,y4;
    system("cls");
    printf("\nEnter the no. of terms : ");
    scanf("%d",&n);
    printf("\nEnter the value in the form of x : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the value of x%d : ",i+1);
        scanf("%f",&mx[i]);
    }
    printf("\nEnter the value in the form of y : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the value of y%d : ",i+1);
        scanf("%f",&my[i]);
    }
    printf("\nEnter the value of x for which you want the value of of y : ");
    scanf("%f",&x);
    h = mx[1]-mx[0];
    for(i=0;i<n-1;i++)
    {
        diff[i][1] = my[i+1]-my[i];
    }
    for(j=2;j<=4;j++)
    {
        for(i=0;i<n-j;i++)
        {
            diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
        }
    }
    i=0;
    while(!mx[i]>x)
    {
        i++;
    }
    x0=mx[i];
    sum=0;
    y0=my[i];
    fun=1;
    p=(x-x0)/h;
    sum=y0;
    for(k=1;k<=4;k++)
    {
        fun = (fun*(p-(k-1))/k);
        sum = sum+fun*diff[i][k];
    }
    printf("\nWhen x = %6.4f  ,  y = %6.8f",x,sum);
 }
/*
5
1
3
5
7
9
5.6
7.9
13.8
15
19
8
*/
