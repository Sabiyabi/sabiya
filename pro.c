#include<signal.h>
#include<stdio.h>
#include<unistd.h>
main()
{
	pid_t pid;
	pid=fork();
	int id;
	if(pid>0)
	{
		printf("%d\n",id=getpid());
		while(1)
		{
			printf("Reverse\n");
		}
	}
	else
	{
		while(1)
		{
			printf("child:started\n");
			printf("child:%d\n",getpid());
			printf("child parent:%d\n",getppid());
			kill(getppid(),9);
			printf("child parent:%d\n",getppid());
		}
	}
}

