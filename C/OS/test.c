#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
   int a=0, b=1, n=a+b,i,m;
   pid_t pid;
   scanf("%d", &m);
   if (m < 0)
      printf("Negative no.!\n");
   else
   {
      pid = fork();
      if (pid == 0)
      {
         printf("%d %d ",a,b);
         for (i=0;i<m-2;i++)
         {
            n=a+b;
            printf("%d ", n);
            a=b;
            b=n;
         }
      }
      else
          wait(NULL);
   }
   return 0;
}
