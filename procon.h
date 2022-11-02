#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 2 // Max number of items and buffer

class shm {
public:
    sem_t emp;
    sem_t full;
    int buff[SIZE];
};

sem_t sema;
pthread_t temp1,temp2;
