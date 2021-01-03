#include <iostream>

using namespace std;

int main() {
    bool a;
    a = true;
    bool b;
    b = false;
    cout << "a = " << a << endl;
    cout << "a = " << boolalpha << a << endl;
    cout << "b = " << noboolalpha << b << endl;

    bool m = true;
    bool n = 5 < 3;
    cout << "m = " << boolalpha << m << endl;
    cout << "n = " << boolalpha << n << endl;

    bool x = true && false; // and
    bool y = true || false; // or
    cout << "x = " << boolalpha << x << endl;
    cout << "y = " << boolalpha << y << endl;

    bool age = 70;
    bool isFree = age > 60;
    if (isFree) {
    }
    if (age > 60) {
    }
    return 0;
}