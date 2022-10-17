#Program Name
 Create Directory and Remove directory.
 

#Header File:  #include<sys/types.h>
#System Call:  1- mkdir(const char *path ,mode_t mode);
		Return value: on Success it will create directory
			      on Failure it will return -1.
	       2- rmdir(const char *path)
		Return value: on success it will remove directory

#Description:
In this program i created a directory by using mkdir() system call.This system call takes two inputs,first input is path i.e directory name , and second input is permission.
for removing directory i used rmdir () system call.which having only one input that is directory name which want to remove.
		


