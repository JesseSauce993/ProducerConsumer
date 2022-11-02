# ProducerConsumer
#This code shows how the producer consumer problem is solved using semaphores.

#the semaphore is declared inside the header file along with two pthread processes. 

#the main file initializes the semaphore to 2 and the threads are created.  

#the threads enter the critical section one by one, each decrementing the semaphore. 

#when each thread exits, signal is called and the semaphore is incremented. 

#the semaphore is then deleted at the end of the program.
#
#
#this program was compiled in a linux server with command 
#clang++ -std=c++11 -lpthread -lrt  producer.cpp -o producer 
