/* The preprocessors are the directives, which give instructions to the compiler to preprocess
the information  *** before actual compilation starts ***.
*/

#include <iostream>
using namespace std;

#define PI 3.14159
#define MAX(a, b) ( (a > b) ? a : b)
#define DEBUG
#define myConcat(a,b) a ## b

int main() {

#ifdef DEBUG
   cerr <<"Trace: Inside main function" << endl; // That prints only to Screen
#endif

    cout << "PI : " << PI << endl; 
    cout << "Max: " << MAX(2,4) << endl; 

#if 1
   /* This is commented part */
   cout << "HELLO C++" << endl;
#endif

    int ab = 10;
    cout << myConcat(a, b) << endl;

    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

    return 0;
}
