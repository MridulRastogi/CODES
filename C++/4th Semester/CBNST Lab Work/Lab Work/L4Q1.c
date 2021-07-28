#include<stdio.h>
#include<math.h>
int main()
{
    float x,xa,ea,er,ep;
    printf("Enter the True value        : ");
    scanf("%f",&x);
    printf("Enter the Approximate Value : ");
    scanf("%f",&xa);
    ea = (x-xa);
    er = ea/x;
    ep = er * 100.0;
    ea = ea<0 ? (ea*-1) : ea;
    er = er<0 ? (er*-1) : er;
    ep = ep<0 ? (ep*-1) : ep;
    printf("\nThe Absolute Error is   : %.4f \n", ea);
    printf("The Relative Error is   : %.4f \n", er);
    printf("The Percentage Error is : %.4f % \n", ep);
    return 0;
}
