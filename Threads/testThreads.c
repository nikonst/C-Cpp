
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 
  
// A global variable to be changes in threads 
int g = 0; 
  
// The function to be executed by all threads 
void *myThreadFunction(void *vargp) 
{ 
    // Store the value argument passed to this thread 
    int *myid = (int *)vargp; 
  
    // Let us create a static variable to observe its changes 
    static int s = 0; 
    int k = 0;
    // Change static and global variables 
    ++k;
    ++s;
    ++g; 
  
    // Print the argument, static and global variables 
    printf("Thread ID: %d, Local:%d, Static: %d, Global: %d\n", *myid, k, s, g); 
} 
  
int main() 
{ 
    int i; 
    pthread_t tid; 
  
    // Create three threads 
    for (i = 0; i < 3; i++) 
        pthread_create(&tid, NULL, myThreadFunction, (void *)&tid); 
  
    pthread_create(&tid, NULL, myThreadFunction, (void *)&tid); 
    pthread_exit(NULL); 
    return 0; 
} 
