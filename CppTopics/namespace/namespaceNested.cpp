#include <iostream>
using namespace std;

namespace firstSpace {
   void func() {
      cout << "aFunction in firstSpace" << endl;
   }
   
   namespace secondSpace {
      void func() {
         cout << "aFunction in secondSpace" << endl;
      }
   }
}

using namespace firstSpace::secondSpace;
int main () {
   
    func();
    func();

    firstSpace::func();

    return 0;
}