#include <iostream>
using namespace std;

class Emmployee
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
};

int main()
{
    Emmployee emp1("Sofia", "Simtons", 33);
    emp1.Introduce();

    Emmployee emp2("Ann", "Simtons", 37);
    emp2.Introduce();

    return 0;
}
