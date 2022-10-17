#include<stdio.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
int main(int argc,char *argv[])
{
	printf("program name is %s\n",argv[0]);
	if(argc==2)
	{
		execl(argv[1],argv[1],NULL);
	}

}

