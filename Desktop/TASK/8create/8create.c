#include<stdio.h>
#include<fcntl.h>
int main()
{
	int ret;
	ret=open("mp.txt",O_RDWR|O_CREAT,0664);
	printf("%d\n",ret);
}

