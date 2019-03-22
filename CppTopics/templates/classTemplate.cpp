#include <iostream>
#include <string>
using namespace std;

#include <iostream>
using namespace std;

template <class T>
class aPair {
    T a, b;
  public:
    aPair (T first, T second) {
        a = first;
        b = second;
        }
    T getmax ();
};

template <class T>
T aPair<T>::getmax ()
{
  T returnVal;
  returnVal = a > b? a : b;
  return returnVal;
}

int main () {
  aPair <int> alfaObject (100, 75);
  cout << alfaObject.getmax() << endl;

  aPair <float> betaObject (100.56, 752.67);
  cout << betaObject.getmax() << endl;

  aPair <string> gammaObject ("One", "Two");
  cout << gammaObject.getmax() << endl;

  return 0;
}
