/* Length Unit Corversion */
#include <iostream>
using namespace std;

class LengthMeters {
	private:
		float l;
	
	public:
		LengthMeters() {l = 1;}
		LengthMeters(float k) { l = k; cout << "The is an object of "<< l << " meters" << endl;}
		~LengthMeters(){ cout << "Object Deleted" << endl;}
	
		float toKm() {
			cout << l/1000 << " Kilometers"<< endl;
		}
		float toMiles() {
			cout << l*0.000621 << " Miles"<< endl;
		}
		float toInches() {
			cout << l*39.37007 << " Inches"<< endl;
		}
		float toFeet() {
			cout << l*3.280839895013 << " Feet"<< endl;
		}
		float toYards() {
			cout << l*1.093613298338 << " Yards"<< endl;
		}
};

int main() {
	
	LengthMeters len(5560);
	
	len.toKm();
	len.toMiles();
	len.toInches();
	len.toFeet();
	len.toYards();
	
	return 0;
}