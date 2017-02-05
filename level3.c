#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
typedef enum { false, true  } bool;
//thread to act as a microcontroller that generates data every 30 seconds
void *pseudo_controller(void *vargp)
{
printf("hello im pseudo controller\n");
  //run a function every 30 seconds
    while(1)
    {         
printf("$GPGSV,3,1,11,09,76,148,32,05,55,242,29,17,33,054,30,14,27,314,24*71/n");
fflush(stdout);
usleep(30000000);   
 }
}

//thread to act as a data server that connects to the microcontroller and receives data from the same
void *data_server(void *dservp){
  char key;
printf("Server to receive data from microcontroller");
  //run a function every 31 seconds
  while(1){
  printf("Connected to microcontroller...do you want to disconnect? ");
  fflush(stdout);
  scanf("%c", key);
  usleep(31000000);
  }
}

int main()
{
pthread_t tid;
printf("Welcome to message generation system for microcontroller\n");
//create  a  thread for running the  pseudo controller 
pthread_create(&tid, NULL, pseudo_controller, NULL);
pthread_create(&tid, NULL, data_server, NULL);  
pthread_join(tid, NULL);
return 0;
}

