#include<stdio.h>
#include<unistd.h>
int main()
{
    int a=1,pid = fork();
    for(int i=1; i<=3; i++)
    {
        a = a*i;
        printf("%d \n",pid);
    }
    return 0;
}
