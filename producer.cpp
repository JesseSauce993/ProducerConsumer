// C program to demonstrate working of Semaphores
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include "procon.h"


void* thread(void* arg)
{
	//wait; decrements semaphore
	sem_wait(&sema);
	printf("\nEntered critical section..\n");

	//critical section
	sleep(4);
	
	//signal; incremenets semaphore 
	printf("\nExiting critical section...\n");
	sem_post(&sema);

    return NULL;
}


int main()
{
	sem_init(&sema, 0, 2); //semaphore with value of 2
	
	pthread_create(&temp1,NULL,thread,NULL);
	sleep(2);
	pthread_create(&temp2,NULL,thread,NULL);

	pthread_join(temp1,NULL);
	pthread_join(temp2,NULL);

	sem_destroy(&sema);
	return 0;
}
