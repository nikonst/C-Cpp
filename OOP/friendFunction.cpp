/* friend function */

#include <iostream>
#include <cstring>

using namespace std;

class Box {
	private :
		int data;
		char dataText[20];
	public:
		Box() { data = 1; strcpy(dataText,"Data Text"); }
		void getData() {cout << "\nData= " << data << "\nText = " << dataText ;}
		friend void changeData(Box&);
		friend void showData(Box b);
};

void changeData(Box& b) {
	 b.data = 2;
	 strcpy(b.dataText,"Altered Text"); 
}

void showData(Box b) {
	 cout << "\n" << b.data << endl;
	 cout << "\n" << b.dataText << endl;
}

int main() {
	Box box1;
	
	box1.getData();
	changeData(box1);
	box1.getData();
	showData(box1);

	return 0;
}