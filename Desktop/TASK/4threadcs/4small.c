#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
pthread_mutex_t mutex =PTHREAD_MUTEX_INITIALIZER;
void *lower(void *ptr);
void *upper(void *ptr);
char letter[25];
int main()
{
	pthread_t ti1,ti2;
	char *ptr;
	printf("enter your word\n");
        scanf("%s",&letter);

	pthread_create(&ti1,NULL,lower,NULL);
	pthread_create(&ti2,NULL,upper,NULL);
	pthread_join(ti1,&ptr);
	pthread_join(ti2,&ptr);
}
void *upper(void *ptr)
{
	int i;
	pthread_mutex_lock(&mutex);
	for(i=0;letter[i]!='\0';i++)

	{
		sleep(1);
		if(letter[i]>='A' && letter[i]<='Z')
		{
			printf("%c Uppercase letter\n",letter[i]);
		}
			pthread_mutex_unlock(&mutex);
	}
}
void *lower(void *ptr)
{
	int i=0;
        pthread_mutex_lock(&mutex);
	for(i=0;letter[i]!='\0';i++)
        {
		sleep(1);
                if(letter[i]>='a' && letter[i]<='z')
                {
                        printf("%c Lowercase letter \n",letter[i]);
			
                }
			pthread_mutex_unlock(&mutex);
        }
}

