#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define N 10

int main() {

    cout << "Ready to write to file" << endl;

    ofstream outfile;
    outfile.open("numbers.txt");
    if( outfile.is_open()) {
        for(int i =0;i <= N; i++) {
            outfile << "Data:"<< i << endl;
        }
        outfile.close();
    }
    cout << "Done!" << endl;
    return 0;
}
