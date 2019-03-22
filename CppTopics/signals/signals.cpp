/*
Signals are the interrupts delivered to a process by the operating system 
which can terminate a program prematurely.

Signals in C++ are defined in C++ header file <csignal>.

C++ signal-handling library provides function signal to trap unexpected events.
Following is the syntax of the signal() function:

void (*signal (int sig, void (*func)(int)))(int); 

*/

#include <iostream>
#include <csignal>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

void signalHandler( int signum ) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // cleanup and close up stuff here  
    // terminate program  

    exit(signum);  
}


int main() {
    // register signal SIGINT and signal handler  
    signal(SIGINT, signalHandler);  

    while(1) {
        cout << "Going to sleep...." << endl;
        sleep(1);
    }

    return 0;
}