//Program to read a file and console lat, lon, timestamp and velocity on each line
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

main()
{
char ch;
FILE *fp;
char * line  = NULL;
size_t len = 0;
const char s[2] = ",";
char *reading;
char *currenttype;
//Type declarations 
char *GPGGA="$GPGGA";
char *GPRMC="$GPRMC";
char *GPGSV="$GPGSV";
char *GPVTG="$GPVTG";
char *GPGSA="$GPGSA";

fp=fopen("raw_dump.io","r");
if(fp==NULL)
{
perror("Error while opening file.\n");
exit(0);
}
//printf("The contents of  file are:\n");
while((ch=getline(&line, &len, fp)) != -1)
{
//printf("%s",line);
 
//Logic to check type and value for each line 
   reading = strtok(line, s);
   int counter = 0;
   while( reading != NULL ) 
   {           
        int equal;
        if(counter == 0){
         // get the first token 
            printf("%s", reading);
             currenttype =reading;
        }else {
            // walk through other tokens 
            //type is GPGGA
            if(strcmp(currenttype, GPGGA) == 0){
                switch(counter){
                    case 3: 
                    printf(", Latitude is %s\n", reading);
                    break;
                    case 1 :
                    printf(", Longitude is %s", reading);
                    break;
                }
            }
            //type is GPRMC
            else if(strcmp(currenttype, GPRMC) == 0){
                switch(counter){
                    case 3:
                    printf("latitude is %s,", reading);
                    break;
                    case 1:
                    printf("longitude is %s\n", reading);
                    break;
                }
                }
             //type is GPGSV
            else if(strcmp(currenttype, GPGSV) == 0){
                switch(counter){
                    case 3:
                    printf("latitude is %s,", reading);
                    break;
                    case 1:
                    printf("longitude is %s\n", reading);
                    break;
                }
                }
                     //type is GPVTG
            else if(strcmp(currenttype, GPVTG) == 0){
                switch(counter){
                    case 3:
                    printf("latitude is %s,", reading);
                    break;
                    case 1:
                    printf("longitude is %s\n", reading);
                    break;
                }
                }
                     //type is GPGSA
            else if(strcmp(currenttype, GPGSA) == 0){
                switch(counter){
                    case 3:
                    printf("latitude is %s,", reading);
                    break;
                    case 1:
                    printf("longitude is %s\n", reading);
                    break;
                }
                }
         //types of inputs end
            }
      reading = strtok(NULL, s);
      counter++;
}
 //logic to check type and values for each line ends
}
fclose(fp);
return 0;
}
