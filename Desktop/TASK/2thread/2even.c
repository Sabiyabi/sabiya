#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
pthread_mutex_t mutex =PTHREAD_MUTEX_INITIALIZER;
void *evennum(void *ptr);
void *oddnum(void *ptr);
int min;
int max;
int main()
{
	pthread_t ti1,ti2;
	int *ptr;
	printf("enter min number\n");
        scanf("%d",&min);
	 printf("enter max number\n");
        scanf("%d",&max);

	pthread_create(&ti1,NULL,evennum,NULL);
	pthread_create(&ti2,NULL,oddnum,NULL);
	pthread_join(ti1,&ptr);
	pthread_join(ti2,&ptr);
}
void *evennum(void *ptr)
{
	for(int i=min;i<=max;i++)
	{
		sleep(2);	
		if(i%2==0)
		{
			pthread_mutex_lock(&mutex);
			printf("%d Even number\n",i);
	
			pthread_mutex_unlock(&mutex);
		}
		sleep(1);
	}
}
void *oddnum(void *ptr)
{
	for(int i=min;i<=max;i++)
       {
	        sleep(2);
                if(i%2!=0)
                {
			pthread_mutex_lock(&mutex);
                        printf("%d Odd number\n",i);
			pthread_mutex_unlock(&mutex);
		}
		sleep(1);
        }
}





