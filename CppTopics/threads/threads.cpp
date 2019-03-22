/*
The following routine is used to create a POSIX thread −

#include <pthread.h>
pthread_create (thread, attr, start_routine, arg) 

pthread_create creates a new thread and makes it executable. 
This routine can be called any number of times from anywhere within the code

----------

If main() finishes before the threads it has created, and exits with pthread_exit(),
the other threads will continue to execute. Otherwise, they will be automatically
terminated when main() finishes.
*/

#include <iostream>
#include <cstdlib>
#include <pthread.h>

#define NUMBER_OF_THREADS 5

using namespace std;

void *PrintSomething(void *threadid) {
    long tid;
    tid = (long)threadid;
    cout << "Hello World! Thread ID, " << tid << endl;
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUMBER_OF_THREADS];
    int rc;
    long i;
    
    for( i = 0; i < NUMBER_OF_THREADS; i++ ) {
        cout << "main() : creating thread, " << i << endl;
        rc = pthread_create(&threads[i], NULL, PrintSomething, (long *)i);
        
        if (rc) {
            cout << "Error:unable to create thread," << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
    //  return 0;
}