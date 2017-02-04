#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

typedef enum { false, true  } bool;

void *pseudo_controller(void *vargp)
{
printf("hello im controller");
}
main()
{
pthread_t tid;

//create  a  thread for running the  pseudo controller 
pthread_create(&tid, NULL, pseudo_controller, (void *)0);
return 0;
}

