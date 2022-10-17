#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int res;
	res=mkdir("sp",0664);
	printf("%d\n",res);
//	res=rmdir("sp");
//	printf("%d\n",res);
}

