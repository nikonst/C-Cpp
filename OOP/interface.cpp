/* Interface */
#include <iostream>
using namespace std;

class DataBox {
	protected:
		int data;
	public:
		DataBox() { data = 0;}
		virtual int multiplyData(int byWhat) = 0;
		void getData() {
			cout << "Data = " << data << endl;
		}
};

class ADataBox: public DataBox {
	public:
		ADataBox() {data = 0;}
		ADataBox(int k) {data = k;}
		int multiplyData(int byWhat) {
			data *= byWhat;
		}
};

int main() {

	ADataBox a(5);
	a.multiplyData(3);
	a.getData();
	
	return 0;
}