
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
//#define a 100
int main()
{
int num,n;
int i,j, pid,sum,prod;
pid=fork();
printf("\n Enter the number of array :");
scanf("%d", &num);

for(i=0; i<num;i++)
{

printf("\n Enter the digits : ");
scanf("%d", &n[i]);
  if(pid==0)
  {
  sum=0;
   for(j=0;j<n;i++)
   {
   sum=sum+arr[i];
   printf("\n Child sum : %d\n ", sum);
   sleep(2);
   }
  return EXIT_SUCCESS;
  }

  if(pid>0)
  {
  prod=1;
   for(i=0;i<n;i++)
   {
   prod=prod*arr[i];
   printf("\n Parent prod : %d\n " ,prod);
   sleep(2);
   }
   return EXIT_SUCCESS;
  }
 else
 {
 printf("\n Fork Failed /n");
 return EXIT_FAILURE;
 }
}

}
