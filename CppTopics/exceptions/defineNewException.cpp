#include <iostream>
#include <exception>
using namespace std;

struct myException : public exception {
   const char * msg () const throw () {
      return "A C++ Exception of mine!";
   }
};
 
int main() {
   try {
      throw myException();
   } catch(myException& e) {
        cout << "MyException caught" << endl;
        cout << e.msg() << endl;
        cout << e.what() << endl;
   } catch(exception& e) {
      //Other errors
   }
}