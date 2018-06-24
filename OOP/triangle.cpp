#include <iostream>
using namespace std;

class Triangle {
	public:
		Triangle();
		Triangle(float b, float h);
		float getBase();
		float getHeight();			
		
		float calculateArea() {
			return base*height/2;
		}
						
	private:
		float base;
		float height;
};

Triangle::Triangle() {
	base = 1;
	height = 1;
}

Triangle::Triangle(float b, float h) {
	base = b;
	height = h;
}

float Triangle::getBase() {
			return base;
		}
	
float Triangle::getHeight() {
			return height;
		}
		
int main() {
	Triangle t1;
	Triangle t2(5,3);
	
	cout << t1.getBase() << endl;
	cout << t1.getHeight() << endl;
	cout << t1.calculateArea() << endl;
	cout << endl;
	cout << t2.getBase() << endl;
	cout << t2.getHeight() << endl;
	cout << t2.calculateArea() << endl;
	
	return 0;
}