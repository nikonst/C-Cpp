/* inheritance */

#include <iostream>
using namespace std;

#define N 10

class AClass {
	protected:
		// int innerdata = 1;
		int data;
	public:
		void setData(int k) {
			data = k;
		}
		void showData() {
			cout << "Data = " << data << endl;
		}
		/*void showInnerData() {
			cout << "Inner Data = " << innerdata << endl;
		} */
};

class BClass {
	protected:
		int bdata;
	public:
		void setBData(int k) {
			bdata = k;
		}
		void showBData() {
			cout << "BData = " << bdata << endl;
		}
};

class CClass: public AClass, public BClass {
	private:
		int cdata;
	public:
		setCData(int k) {
			cdata = k;
		}
		void showCData() {
			cout << "Cdata = " << cdata << endl;
		}
};

int main() {
	AClass aobj;
	BClass bobj;
	CClass cobj;

	aobj.setData(5);
	aobj.showData();
	cout << "--------------" << endl;
	bobj.setBData(25);
	bobj.showBData();
	cout << "--------------" << endl;
	cobj.setData(1);
	cobj.setBData(2);
	cobj.setCData(3);
	cobj.showData();
	cobj.showBData();
	cobj.showCData();
	//cobj.showInnerData();

	return 0;
}