#include<stdio.h>
#include<string.h>

int extract_coefficients(char a[])
{
    int i,c,d=0,l = strlen(a);
    char num[10];
    if(a[1]<48 || a[1]>57)
        c=1;
    else
    {
        for(i=1;i<=l;i++)
        {
            if(a[i]>=48 && a[i]<=57)
                num[d++] = a[i];
            else
            {
                sscanf(num,"%d",&c);
                break;
            }
        }

    }
    return c;
}

int extract_degrees(char a[])
{
    int i,d,c,count=0,l = strlen(a);
    for(i=1;i<l;i++)
        if(a[i]>=48 && a[i]<=57)
            count++;
    if((a[l-1]<48 || a[l-1]>57))
        d=1;
    else
    {
        if(count==(l-1))
            d=1;
        else
        {
            char num[10];
            for(i=0;i<10;i++) num[i] = '0';
            num[9] = '\0';
            c=8;
            for(i=l-1;i>0;i--)
            {
                if(a[i]>=48 && a[i]<=57)
                    num[c--] = a[i];
                else
                {
                    sscanf(num,"%d",&d);
                    break;
                }
            }
        }
    }
    return d;
}

int main()
{
    char s[100];
    printf("Equation : ");
    gets(s);
    s[strlen(s)]   = '+';
    s[strlen(s)+1] = '\0';
    int l = strlen(s);
    char ar[l][l];
    int i,c=0,d=1;
    for(i=0;i<l;i++)
    {
        ar[i][0] = ' ';
        ar[i][1] = '\0';
    }
    for(i=0;i<l;i++)
    {
        if(s[i]!='+' && s[i]!='-')
        {
            ar[c][d++] = s[i];
        }
        else
        {
            if(ar[c][1]!='\0')
            {
                ar[c][d++] = '\0';
                d=1;
                c++;
            }
        }
    }
    char coef[100], deg[100];
    for(i=0;i<c;i++)
    {
        coef[i] = extract_coefficients(ar[i]);
        deg[i] = extract_degrees(ar[i]);
        printf("\nLength = %d, String =%s\n\t     Coefficients : %d\n\t     Degree : %d\n",strlen(ar[i]),ar[i],coef[i],deg[i]);
    }
    return 0;
}
