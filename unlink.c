#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define LOCKFILE "/etc/ptmp"
int main()
{
int pfd;
FILE *fpfd;
if((fpfd = fdopen (pfd, "w")) == NULL)
{
close(pfd);
unlink(LOCKFILE);
exit(1);
}
}
