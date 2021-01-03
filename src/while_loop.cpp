#include <iostream>

using namespace std;

void demo1() {
    int i = 1;
    while (i <= 10) {
        cout << i << endl;
//        i = i + 1;
        i++;
    }
}

void demo2() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
}

void demo3() {
    int cnt = 0;
    int n = 1;
    while (cnt < 10) {
        if (n % 3 == 0 || n % 7 == 0) {
            cnt++;
            cout << n << " ";
        }
        n++;
    }
}

int main() {
//    demo1();
//    cout << "--------------" << endl;
//    demo2();
    demo3();
    return 0;
}