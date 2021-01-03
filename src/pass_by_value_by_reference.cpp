#include <iostream>

using namespace std;

void demo(int v, int &r) {
    // parameter v: pass by value
    // parameter r: pass by reference
    cout << "inside demo()" << endl;
    cout << "v = " << v << ", address = " << &v << endl;
    cout << "r = " << r << ", address = " << &r << endl;
    v = v + 10;
    r = r + 10;
    cout << "inside demo()--after changing values " << endl;
    cout << "v = " << v << ", address = " << &v << endl;
    cout << "r = " << r << ", address = " << &r << endl;
}

int main() {
    int v = 7;
    int r = 7;
    cout << "inside main() " << endl;
    cout << "v = " << v << ", address = " << &v << endl;
    cout << "r = " << r << ", address = " << &r << endl;

    demo(v, r);
    cout << "inside main()--after calling demo()" << endl;
    cout << "v = " << v << ", address = " << &v << endl;
    cout << "r = " << r << ", address = " << &r << endl;

    return 0;
}