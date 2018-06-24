/* protected vs private */

#include <iostream>
using namespace std;

class Box {
	private:
		int data1;
	protected:
		int data2;
	public:
		Box() {data1 = 1; data2 = 2;}
		~Box() { cout << "Object Deleted" << endl;}
		void getData() { cout << "data1= " << data1 << "data2= " << data2 << endl; }

};

class aBox:Box {
	public:
		aBox() { 
			// data1 = 0; Private in Box!
			data2 = 0;
			}
		void getData() { cout << "data2= " << data2 << endl;  }
};

int main() {
	Box box1;
	aBox box2;
	
	box1.getData();
	box2.getData();
	
	return 0;
}