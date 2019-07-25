#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd1 = open("fdd.txt" , O_RDONLY, 0);
close(fd1);
int fd2 = open("fdd1.txt" , O_RDONLY, 0);
printf("fd2 = %d\n" , fd2);
exit(0);
}
