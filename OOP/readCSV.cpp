/* read CSV */

#include <fstream>
#include <iostream>
using namespace std;

class Person {
	private:
		string firstname;
		string lastname;
		string data1;
		string data2;
	public:
		setData(string a, string b, string c, string d) {
			firstname = a;
			lastname = b;
			data1 = c;
			data2 = d;
		}
		showData() {
			cout << firstname << " " << lastname << " " << data1 << " " << data2 << endl;
		}
};

int main() {
	int i, flag = 0;
	Person p[100];
	char dataLine[100];
	string firstname, lastname;
	string num1, num2;
		
	ifstream infile; 
	infile.open("data.csv"); 
	
	if(infile.is_open()) {
		cout << "Reading from the file" << endl; 
		i = 0;
		while(infile.good()) {
			getline(infile,firstname,',');
			getline(infile,lastname,',');
			getline(infile,num1,',');
			getline(infile,num2,'\n');
			
			p[i].setData(firstname, lastname, num1, num2);
			i++;
			//cout << firstname << lastname << num1 << num2 << endl;
		}
		infile.close();
		}
	else {
		cout << "No Such File." << endl;
		flag = 1;
	}
	
	if(flag == 0) {
		for(i=0;i<100;i++) {
			p[i].showData();
		}
	}
	return 0;
}