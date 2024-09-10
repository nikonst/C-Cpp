#include <iostream>
using namespace std;

class AbstrEmployee {
    virtual void LunchTime() = 0;
};

class Emmployee: AbstrEmployee
{
    // private
    string Name;
    string Company;
    int Age;

public:
    Emmployee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void Introduce()
    {
        cout << "Name " << Name << endl;
        cout << "Company " << Company << endl;
        cout << "Age " << Age << endl;
    }

    void LunchTime() {
        cout << "Time for lunch" << endl;
    }
};

int main()
{
    Emmployee emp1("Sofia", "Simtons", 33);
    emp1.Introduce();
    emp1.LunchTime();

    Emmployee emp2("Ann", "Simtons", 37);
    emp2.Introduce();
    emp2.LunchTime();

    return 0;
}
