#Program Name:
   To Print the Small Characters inOne Thread and Capital Characters in Other Thread.


#Header File:  #include<pthread.h>


#System Call:    1-   int pthread _create (pthread_t *thread, const pthread_attr_t *attr,
                          void *(*start_routine) (void *), void *arg);

		 2-  int pthread_join(pthread_t thread, void **retval);


#Return Value:    On  success,  pthread _create() returns 0; 
		 On failure, it returns an error number.


		 On success, pthread_join() returns 0;
                 On failure,  it  returns  an  error number.


#Description:
		Create pthread by using pthread_create() function call.to print Small character in one thread and Capital Character in other thread simulteniously. here i used pthread_join() system call it act as blocking call,it block until the corresponding thread execution gets completed.it will print small character in one thread and capital character in other thread function. The program is compiled by using  gcc program.c -lpthred, -lpthread function is used to link the thread with kernel. 
