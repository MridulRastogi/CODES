#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    int d=0;
    char i[50],o[50],ch;
    ptr = fopen("E://Dictionary/english3/Words.txt","r");
    if(ptr==NULL)
    {
        printf("File does not exist.\n");
        exit(1);
    }
    else
    {
        printf("Enter text : ");
        scanf("%s",&i);
        printf("Input = %s\n",i);
        while(getchar()!=EOF)
        {
            while(fgets(o,strlen(i)+1,ptr)!=NULL)
            {
                if(strcmp(i,o)==0)
                {
                    printf("Found\tPosition = %d\tLength = %d\n",ftell(ptr),strlen(i));
                    d=1;
                }
            }
        }
        if(d==1)
            printf("Found");
        else
            printf("Not Found");
    }
    fclose(ptr);
    return 0;
}

