#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#define a 10
int main()
{
int i, pid,sum,prod, arr[a]={1,2,3,4,5,6,7,8,9,10};
pid=fork();
  if(pid==0)
  {
  sum=0;
   for(i=0;i<a;i++)
   {
   sum=sum+arr[i];
   printf("\n Child sum : %d\n ", sum);
   sleep(1);
   }
  exit(EXIT_SUCCESS);
  }

  if(pid>0)
  {
  prod=1;
   for(i=0;i<a;i++)
   {
   prod=prod*arr[i];
   printf("\n Parent prod : %d\n " ,prod);
   sleep(2);
   }
   exit(EXIT_SUCCESS);
  }
 else
 {
 printf("\n Fork Failed /n");
 exit(EXIT_FAILURE);
 }
}

