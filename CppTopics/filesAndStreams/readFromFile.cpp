#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    string line;
    ifstream infile;
    infile.open("numbers.txt");
    if( infile.is_open()) {
        cout << "Ready to read form file." << endl;
        while( getline(infile, line)) {
            cout << line << endl;
        }
        // Read and print to screen the third line
        infile.clear();
        infile.seekg(0); // Rewind the file
        cout << "File Index: " << infile.tellg() << endl; // Print current file index
        
        for (int lineNumber = 0; getline(infile,line) && lineNumber < 3; lineNumber++)
            if (lineNumber == 2)
                cout << line << endl;
        
        infile.close();
        cout << "Done" << endl;
    }
    else {
        cout << "Unable to open file" << endl;
    }
    return 0;
}