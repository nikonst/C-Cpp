/* static members */

#include <iostream>
using namespace std;

class DataBox {
	private:
		int data;
		static int countObjs;

	public:
		DataBox(int a) { data = a; countObjs++;}
		void getData() { cout << "Data = " << data << endl;}
		void showCount() { cout << "Number of Objects = " << countObjs << endl;}
};

int DataBox::countObjs = 0;

int main() {
	DataBox db1(10), db2(15), db3(20);
	
	db1.getData();
	db2.getData();
	db3.getData();
	db1.showCount();
	
	return 0;
}