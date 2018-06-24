/* 'this' Keyword and Pointer */

#include <iostream>
using namespace std;

class DataBox {
	public:
		DataBox();
		DataBox(int x) {a = x;}
		changeData(int k) { this->a = k;}
		showData() { cout << "Data: " << a << endl;}
	private:
		int a;
};

int main() {
	DataBox d(12);
	DataBox *b;
	
	d.showData();
	d.changeData(22);
	d.showData();
	
	b = &d;
	b->showData();
	(*b).showData();
	return 0;
}