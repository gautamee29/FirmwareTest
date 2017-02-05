//program to read a file and console log lat, lon, timestamp and velocity on each line

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

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

 
 
//logic to check type and value for each line
const char s[2] = ",";
char *reading;
char *currenttype;
//type declarations 
char *GPGGA="$GPGGA";
char *GPRMC="$GPRMC";
   
   /* get the first token */
   reading = strtok(line, s);
   int counter = 0;
   /* walk through other tokens */
   while( reading != NULL ) 
   {           
        int equal;
        if(counter == 0){
            printf("%s", reading);
             currenttype =reading;
        }else {
            //type is GPRMC
            if(strcmp(currenttype, GPRMC) == 0){
                switch(counter){
                    case 3: 
                    printf(", Latitude is %s\n", reading);
                    break;
                    case 1 :
                    printf(", Longitude is %s", reading);
                    break;
                }
            }
            //type is xyz
            else if(strcmp(currenttype, GPGGA) == 0){
                switch(counter){
                    case 3:
                    printf("latitude is %s,", reading);
                    break;
                    case 1:
                    printf("longitude is %s\n", reading);
                    break;
                }
                
                }
            }
            //else ends
      reading = strtok(NULL, s);
      counter++;
}
   //logic to check type and values for each line ends
 
 
 

fclose(fp);
}
return 0;
}
