#include <iostream>
using namespace std;

namespace firstSpace {
    void aFunction() {
        cout << "aFunction in firstSpace" << endl;
    }
}

namespace secondSpace {
    void aFunction() {
        cout << "aFunction in secondSpace" << endl;
    }
}

using namespace firstSpace;

int main() {

    aFunction();
    aFunction();
    secondSpace::aFunction();

    return 0;
}