#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	pid = fork();
	if(pid!=0)
	{
		while(1);
		sleep(20);
	}
	else
	{
		exit(0);
	}
	return 0;
}
