#include <iostream>
#include <exception>
using namespace std;

int main() {
    int a = 5, b = 0;

    try {
        float z = a / b;
        cout << "z=" << z << endl;
    }
    catch (const char* msg) {
        //cout << "DIVISION by ZERO" << endl;
    }

    return 0;
}