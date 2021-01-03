#include <iostream>

using namespace std;

void demo1() {
    double a[]{5, 7.2, 10, 3, 2, 1};
    cout << sizeof(a) << endl;
    cout << sizeof(a[0]) << endl;
    cout << "-------------" << endl;
    int sz = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < sz; i++) {
        cout << a[i] << endl;
    }
}

int main() {
    demo1();
    return 0;
}