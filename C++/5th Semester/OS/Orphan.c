#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid==0)
	{
		sleep(10);
		printf("I am Child Process\n");
		printf("My PID: %d\n", getpid());
		printf("My Parent PID: %d\n", getppid());
	}
	else
	{
		printf("I am Parent Process\n");
		printf("My PID: %d\n", getpid());
		printf("My Child PID: %d\n", pid);
	}
	printf("Terminating PID: %d\n",getpid());
	return 0;
}
