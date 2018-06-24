#include <iostream>
using namespace std;

class Square {
	public:
		Square(float n); // constructor
		float calculateArea();
		float calculatePerimeter();
		
	private:
		float a;
};

Square::Square(float n) {
	a = n;
}

float Square::calculateArea() {
	return a*a;
}

float Square::calculatePerimeter() {
	return a*4;
}

int main() {
	Square s1(5);
	Square s2(10);
	Square s3(10.9);
	
	cout << "Area: "<< s1.calculateArea() << "\n";
	cout << "Perimeter: " << s1.calculatePerimeter() << "\n";
	
	cout << "Area: " << s2.calculateArea() << "\n";
	cout << "Perimeter: " << s2.calculatePerimeter() << "\n";
	
	cout << "Area: " << s3.calculateArea() << "\n";
	cout << "Perimeter: " << s3.calculatePerimeter() << "\n";
	
	return 0;
}