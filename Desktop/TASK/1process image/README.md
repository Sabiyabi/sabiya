#Program Name
	To change Process image using exec fa,ily of calls.



#Synopsis:
Header file: #include<unistd.h>
System Call:  execlp(const char* file, const char* arg, …)
Return value: On Success it replace the new process image
	      On failure it returns -1.



#Description
 In this program I changed the process image by using one of the exec family of call,here i used execlp() system call it having two input.first one is file name and second one is It is basically a list of pointers to null terminated strings. Here the first argument points to the filename which will be executed as described in point 2.




