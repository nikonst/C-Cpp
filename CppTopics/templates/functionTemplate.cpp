#include <iostream>
using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b) {
    return a < b ? b : a;
}

int main() {

    cout << Max(5,10) << endl;
    cout << Max(55.1,10.12) << endl;
    cout << Max("Alfa","Beta") << endl;

    return 0;
}

