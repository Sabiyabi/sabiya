#Program Name:
Create a file without using create system call.



#Header File:  #include <sys/types.h>      
               #include <sys/stat.h>
               #include <fcntl.h>

#System Call:  int open(const char *pathname, int flags, mode_t mode);
Return Value:  on Success it will return open file fd
	       on failureit will return -1.


#description:  
In this program i created a file by using open () system call which having three inputs,first one is file name, second one in which mode want to open file and the third one is permission.
open system call create a file in given mode with specified permission.


