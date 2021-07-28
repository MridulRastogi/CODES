#include<stdio.h>

int main()
{
    int n,c=0,i,j,vi;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
                c++;
        }
    printf("\nLower Triangle : \n");
    for(i=0;i<n;i++)
    {
        vi = i;
        for(j=0;j<n;j++)
        {
            if(i>vi || j>vi)
                printf("0 ");
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper Triangle : \n");
    for(i=0;i<n;i++)
    {
        vi = i;
        for(j=0;j<n;j++)
        {
            if(i<vi || j<vi)
                printf("0 ");
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
