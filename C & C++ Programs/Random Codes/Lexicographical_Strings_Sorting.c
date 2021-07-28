#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("Enter the number of Strings  : ");
    scanf("%d",&n);
    char s[n][20],a[20],ch;
    scanf("%c",&ch);
    printf("Enter String Array : \n");
    for(i=0;i<n;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(s[j],s[j+1])>0)
            {
                strcpy(a,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],a);
            }
        }
    }
    printf("\nSorted String Array is :\n");
    for(i=0;i<n;i++)
    {
        puts(s[i]);
    }
    return 0;
}
