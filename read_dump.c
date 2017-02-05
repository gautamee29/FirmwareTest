//program to read a file and console log lat, lon, timestamp and velocity on each line

#include<stdio.h>
#include<stdlib.h>
main()
{
char ch;
FILE *fp;
printf("enter the name of the file you wish to open");

fp=fopen("gautamee.txt","r");
if(fp==NULL)
{
perror("error while opening file.\n");
}
exit(0);
 printf("the contents of %s file are:\n");

while( (ch=fgetc(fp) ) !=EOF)
printf("%c",ch);
fclose(fp);
return 0;
}
