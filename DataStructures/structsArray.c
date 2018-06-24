#include <stdio.h>
#include <string.h>

struct Person {
	char firstname[10];
	char lastname[10];
	int age;
};

int main() {

	int i, sAge;
	float ageAvg;
	struct Person people[3];
	
	strcpy(people[0].firstname, "Anna");
	strcpy(people[0].lastname, "Smith");
	people[0].age = 27;

	strcpy(people[1].firstname, "Mary");
	strcpy(people[1].lastname, "Jameson");
	people[1].age = 36;
	
	strcpy(people[2].firstname, "Claire");
	strcpy(people[2].lastname, "Thompson");
	people[2].age = 30;
	
	for(i = 0; i < 3; i++) {
		printf("Mame:%s\n", people[i].firstname);
	}
	sAge = 0;
	for(i = 0; i < 3; i++) {
		sAge += people[i].age;
	}
	ageAvg = sAge / 3;
	printf("Average Age:%3.1f", ageAvg);
	
	return 0;
}

