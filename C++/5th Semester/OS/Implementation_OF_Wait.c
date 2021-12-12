#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	int status;
	pid = fork();
	if(pid==0)
	{
		printf("I am a Child Process.\n");
		exit(0);
	}
	else
	{
		wait(&status);
		printf("I am a Parent Process.\n");
		printf("The Child PID: %d\n",pid);
	}
	return 0;
}
