#include <iostream>

using namespace std;

int main() {

    int * array = NULL;

    array = new int[10];

    cout << "START" << endl;
    
    for(int i = 0;i < 10; i++) {
        array[i] = i;
        
    }

    for(int i = 0;i < 10; i++) {
        cout << *(array + i) << endl;
    }

    delete [] array;

    cout << "END" << endl;
    
    return 0;
}