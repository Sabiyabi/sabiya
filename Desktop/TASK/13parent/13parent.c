#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int res,ret;
	pid_t pid;
	char buff[50];
	int fd[2];
	ret=pipe(fd);
	printf("pipe %d\n",ret);
	pid=fork();
	if(pid>0)
	{
		printf("parent process\n");
		close(fd[0]);
		ret=write(fd[1],"patel",strlen("patel"));
		printf("parent %d\n",ret);
	}
	else
	{
		printf("child process\n");
		close(fd[1]);
		res=read(fd[0],buff,9);
		buff[res]='\0';
		printf("msg received from parent: %s\n",buff);
	}
}
				
