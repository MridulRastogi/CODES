#include<stdio.h>
float fun(float x,float y)
{
    float f;
    f=x+y;
    return f;
}
int main()
{
    float a,b,x,y,h,t,k;
    printf("\nEnter x0, y0, h, xn : ");
    scanf("%f %f %f %f",&a,&b,&h,&t);
    x=a;
    y=b;
    printf("\n x\t  y\n");
    while(x<=t)
    {
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        printf(" %0.3f\t%0.3f\n",x,y);
    }
    return 0;
}

/*
OUTPUT

 Enter x0, y0, h, xn: 0 1 0.1 1

  x       y
 0.100  1.100
 0.200  1.220
 0.300  1.362
 0.400  1.528
 0.500  1.721
 0.600  1.943
 0.700  2.197
 0.800  2.487
 0.900  2.816
 1.000  3.187
*/
