#include <iostream>
using namespace std;

class Box {
    public:
        Box() {a = 1;}
        ~Box() {a = 0;}
        void printData() {
            cout << a << endl;
        }
        void setData(int x) {
            a = x;
        }
    private:
        int a;
};

int main() {

    Box obj1;
    obj1.printData();

    Box * obj2 = new Box();
    obj2->setData(5);
    obj2->printData();
    
    return 0;
}