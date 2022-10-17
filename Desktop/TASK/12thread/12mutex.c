#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *evennum(void *ptr);
void *oddnum(void *ptr);
int min;
int max;
main()
{
	int *ptr;
	pthread_t ti1,ti2;
	printf("enter the min number\n");
	scanf("%d",&min);
	printf("enter the max number\n");
	scanf("%d",&max);
	pthread_create(&ti1,NULL,evennum,NULL);
	pthread_create(&ti2,NULL,oddnum,NULL);
	pthread_join(ti1,&ptr);
	pthread_join(ti2,&ptr);
}
void *evennum(void *ptr)
{
	while(min<max)
	{
		sleep(2);
		if(min%2==0)
		{
			printf("Even number %d\n",min);
			min++;
		}
	}
}
void *oddnum(void *ptr)
{
	while(min<max)
	{
		sleep(2);
		if(min%2!=0)
		{
			printf("Odd number %d\n",min);
			min++;
		}
	}
}



