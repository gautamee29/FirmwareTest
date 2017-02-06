#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>

#define TRUE 1
#define FALSE 0
#define  BUFFER_SIZE  6000000
char connect = TRUE;
char mc_buffer[BUFFER_SIZE] = "$GPGSV,3,1,11,09,76,148,32,05,55,242,29,17,33,054,30,14,27,314,24*71";
//thread to act as a microcontroller that generates data every 30 seconds
void *pseudo_controller(void *vargp)
{
  //run a function every 30 seconds
    while(1)
    {   //A predefined message to be generated
        strcat(mc_buffer, "$GPGSV,3,1,11,09,76,148,32,05,55,242,29,17,33,054,30,14,27,314,24*71");         
        usleep(30000000);   
    }
}
//thread to act as a data server that connects to the microcontroller and receives data from the same
void *data_server(void *dservp){
char key;
  //run a function every 31 seconds - as we have only one pseudo microcontroller connected 
  while(1){
   if(connect){
      //We need to flush the buffer if connected
        printf("Data received: %s \n", mc_buffer);
        mc_buffer[0] = '\0';
        fflush(stdout);
   }
printf("Press key to proceed... C - connect  D - disconnect\n");
scanf("%c",&key);
while((getchar())!='\n');
fflush(stdout);
//Logic to connect and disconnect from microcontroller
if(key == 'C'){
     connect = TRUE;
     printf("connected...\n");
     fflush(stdout);
  }else if(key == 'D'){
    connect = FALSE;
    printf("Disconnected...\n");
    fflush(stdout); 
 }else{
    printf("Invalid input...\n");
}
printf("waiting for data to be generated every 30 seconds...\n");
//logic to process input ends
 usleep(31000000);
  }
}

int main()
{
pthread_t tid;
printf("Welcome to message generation system for microcontroller\n");
//create a thread for running the  pseudo microcontroller 
pthread_create(&tid, NULL, pseudo_controller, NULL);
//create a thread for running the  pseudo data server   
pthread_create(&tid, NULL, data_server, NULL);  
pthread_join(tid, NULL);
return 0;
}

