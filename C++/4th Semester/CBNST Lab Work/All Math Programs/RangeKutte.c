#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
    float m;
    m=(x-y)/(x+y);
    return m;
}

int main()
{
    float x0,y0,m1,m2,m3,m4,m,y,x,h,xn;
    printf("\nEnter x0, y0, xn, h: ");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n   X\t\t   Y\n");
    while(x<xn)
    {
        m1=f(x0,y0);
        m2=f((x0+h/2.0),(y0+m1*h/2.0));
        m3=f((x0+h/2.0),(y0+m2*h/2.0));
        m4=f((x0+h),(y0+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        y=y+m*h;
        x=x+h;
        printf(" %f\t%f\n",x,y);
    }
    return 0;
}
/*
OUTPUT

 Enter x0, y0, xn, h: 0 2 2 0.5

    X              Y
 0.500000       1.621356
 1.000000       1.242713
 1.500000       0.864069
 2.000000       0.485426

*/
