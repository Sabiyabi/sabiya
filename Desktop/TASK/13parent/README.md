#Program name:
 Send message from parent process to child process.


#Header files:  #include<fcntl.h>
                #include<unistd.h>
   

#System Call:   1-  int pipe(int pipe fd[2]);
		2-  ssize_t read(int fd,void*buf,size_t count);
		3-  ssize_t write(int fd,const void *buf,size_t count);
		4-  int close(fd);

#Return Value: 
	       On Success pipe returns two file Descriptors
	       On failure,pipe return -1

	       On Success read returns no of charecters read from file.
	       On failure read return -1.

	       On Success write returns no of charecters write from file.
               On failure write return  -1

               On Success Close returns 0.
	       On failure close return 0.


#Description:
              To send message from parent process to child process we can use IPC Mechanism
              i.e pipes in pipes data flows in one particular direction and read() act as blocking call in child process until parent write the data.

