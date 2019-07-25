
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
int main()
{
FILE *fil;
char name[20],ch,d;
//clrscr();
fil=fopen(name, "w");
printf("Enter the file : " );
scanf("%s" , name);
fil=fopen(name, "r");
if(fil==NULL)
{
printf("File can not open\n ");
exit(EXIT_FAILURE);
}
while(ch!=EOF)
{
d=tolower(ch);
printf("%c" , d);
ch=fgetc(fil);
}
fclose(fil);
return 0;

}



