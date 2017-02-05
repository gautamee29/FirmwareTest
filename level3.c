#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

typedef enum { false, true  } bool;
//thread to act as a microcontroller that generates data every 30 seconds
void *pseudo_controller(void *vargp)
{
printf("hello im pseudo controller\n");
  //run a function every 30 seconds
}

//thread to act as a data server that connects to the microcontroller and receives data from the same
void *data_server(void *dservp){
printf("Server to receive data from microcontroller");
  //run a function every 31 seconds
}

int main()
{
pthread_t tid;
printf("Welcome to message generation system for microcontroller\n");
//create  a  thread for running the  pseudo controller 
pthread_create(&tid, NULL, pseudo_controller, NULL);
pthread_join(tid, NULL);
return 0;
}

