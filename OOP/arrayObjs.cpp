/* Array of Objects */

#include <iostream>
using namespace std;

#define N 3

class Item {

	public:
		Item() { data1 = 1; data2 = 1;}
		
		setData(int a, int b) {data1 = a; data2 = b;}
		
		getMultiple() {
			return data1 * data2;
		}
	
	private:
		int data1;
		int data2;
};

int main() {
	
	int i;
	Item items[N];
	
	for(i = 0; i < N;i ++){
		cout << items[i].getMultiple() << endl;
	}
		
	items[0].setData(12,56);
	items[1].setData(2,34);
	items[2].setData(4,31);
	
	for(i = 0; i < N;i ++){
		cout << items[i].getMultiple() << endl;
	}
	
	return 0;
}

