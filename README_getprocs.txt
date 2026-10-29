CIS 345 - adding getprocs() to xv6 

Objective 
We want to add a new system call getprocs into xv6-public. so that 
we can count the process in the operating system using the process table. 

Modifications On Files

syscall.h 
syscall.c
user.h
usys.S 
proc.c
defs.h
sysproc.c
Makefile

File: getprocs.c

System call number is 22 


Original Output 

processing running: 3 

Extra credit Output 

Processing running: 0 


Conclusion 

This assignment taught me how systems calls work in xv6 and hwo we can 
communicate with the kernel. This was a good hands on experience with 
modifying an operating system. 
