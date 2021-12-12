#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	int n,s=0,i,status;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: \n");
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	pid = fork();
	wait(&status);
	if(pid==0)
	{
		for(i=0; i<n; i++)
			if(a[i]%2==0)
				s += a[i];
		printf("Sum of even numbers: %d\n",s);
		exit(0);
	}
	else
	{
		for(i=0; i<n; i++)
			if(a[i]%2==1)
				s += a[i];
		printf("Sum of odd numbers : %d\n",s);
	}
	return 0;
}
