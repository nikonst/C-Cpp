/*
We can generate signals by function raise(), which takes an integer signal number as an argument
and has the following syntax.

int raise (signal sig);

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
    int i = 0;
    
    // register signal SIGINT and signal handler  
    signal(SIGINT, signalHandler);  

    while(++i) {
      cout << "Going to sleep...." << endl;
      if( i == 5 ) {
         raise(SIGINT);
      }
      sleep(1);
   }

    return 0;
}