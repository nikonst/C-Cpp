#include <iostream>
#include <fstream>
using namespace std;

int main () {
  
    streampos beginOfFile, endOfFile;
    
    ifstream someFile ("numbers.txt", ios::binary);
    if( someFile.is_open()) {
        beginOfFile = someFile.tellg();
        someFile.seekg (0, ios::end);
        endOfFile = someFile.tellg();
        someFile.close();
        cout << "size is: " << (endOfFile-beginOfFile) << " bytes.\n";
    }
    else {
        cout << "Unable to open file" << endl;
    }
    return 0;
}