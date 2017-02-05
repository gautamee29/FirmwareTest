//program to read a file and console log lat, lon, timestamp and velocity on each line

#include<stdio.h>
#include<stdlib.h>
main()
{
char ch;
FILE *fp;
char * line  = NULL;
size_t len = 0;
printf("enter the name of the file you wish to open");

fp=fopen("raw_dump.io","r");
if(fp==NULL)
{
perror("error while opening file.\n");
exit(0);
}
 printf("the contents of  file are:\n");

while( (ch=getline(&line, &len, fp) ) !=-1)
{
printf("%s",line);
reading=strtok(line,',');
//read the values
while(reading != NULL)
{
printf('%s\n",reading);
reading=strtok(NULL,s);
}





fclose(fp);
}
return 0;
}
