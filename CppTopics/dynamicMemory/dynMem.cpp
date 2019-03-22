#include <iostream>

using namespace std;

int main() {

    int * k = NULL;

    k = new int;

    cout << "START" << endl;
    
    cout << "*k =" << *k << endl;
    
    *k = 123;
    
    cout << "*k =" << *k << endl;

    delete k;

    cout << "*k =" << *k << endl;

    cout << "END" << endl;
    
    return 0;
}