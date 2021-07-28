#include <stdio.h>
#include <math.h>
int main()
{
    float i;
    printf("Enter the value : ");
    scanf("%f",&i);

    float sinv = sin(i);
    float cosecv = 1/sinv;
    float cosv = cos(i);
    float secv = 1/cosv;
    float tanv = tan(i);
    float cotv = 1/tanv;
    float logv = log(i);
    float log2v = log2(i);
    float log10v = log10(i);
    float expv = exp(i);

    printf("The value of Sin   (%f)  :  %f \n", i, sinv);
    printf("The value of Cos   (%f)  :  %f \n", i, cosv);
    printf("The value of Tan   (%f)  :  %f \n", i, tanv);
    printf("The value of Cosec (%f)  :  %f \n", i, cosecv);
    printf("The value of Sec   (%f)  :  %f \n", i, secv);
    printf("The value of Cot   (%f)  :  %f \n", i, cotv);
    printf("The value of Log10 (%f)  :  %f \n", i, log10v);
    printf("The value of Log   (%f)  :  %f \n", i, log10v);
    printf("The value of Log2  (%f)  :  %f \n", i, log2v);
    printf("The value of Exp   (%f)  :  %f \n", i, expv);
    return 0;
}
