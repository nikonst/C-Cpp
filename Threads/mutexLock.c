/*  

pthread_join() — Wait for a thread to end

Notes:

    When pthread_join() returns successfully, the target thread has been detached.
    Multiple threads cannot use pthread_join() to wait for the same target thread to end. 
    If a thread issues pthread_join() for a target thread after another thread has successfully 
    issued pthread_join() for the same target thread, the second pthread_join() will be unsuccessful.
    If the thread calling pthread_join() is canceled, the target thread is not detached.

*/
#include <stdio.h> 
#include <string.h> 
#include <pthread.h> 
#include <stdlib.h> 
#include <unistd.h> 
  
pthread_t tid[2]; 
int counter; // Global
pthread_mutex_t lock; 
  
void* trySomeThread(void *arg) 
{ 
    pthread_mutex_lock(&lock);  // Without it counter won't work properly for the 2 threads.
                                // Definition of a critical part.
  
    unsigned long i = 0; 
    counter += 1; 
    printf("\n Job with counter %d has started\n", counter); 
  
    for(i=0; i< 100 ;i++); 
  
    printf("\n Job with counter %d has finished\n", counter); 
  
    pthread_mutex_unlock(&lock); 

    return NULL; 
} 
  
int main(void) 
{ 
    int i = 0; 
    int error; 
  
    if (pthread_mutex_init(&lock, NULL) != 0) 
    { 
        printf("\n Mutex init has failed\n"); 
        return 1; 
    } 
  
    while(i < 2) 
    { 
        error = pthread_create(&(tid[i]), NULL, &trySomeThread, NULL); 
        if (error != 0) 
            printf("\nThread can't be created :[%s]", strerror(error)); 
        i++; 
    } 
  
    pthread_join(tid[0], NULL); 
    pthread_join(tid[1], NULL); 
    pthread_mutex_destroy(&lock); 
  
    return 0; 
} 
