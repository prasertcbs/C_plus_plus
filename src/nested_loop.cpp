#include <iostream>
#include <iomanip> // input output manipulators

using namespace std;

void box() {
    for (int r = 1; r <= 5; r++) {
        for (int i = 1; i <= 10; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

void box2(int w, int h) {
    for (int r = 1; r <= h; r++) {
        for (int i = 1; i <= w; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

// 1
// 22
// 333
// 999999999
void printNumber() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

void multiplicationTable(int fromN, int toN) {
    for (int i = 1; i <= 12; i++) {
        for (int j = fromN; j <= toN; j++) {
            cout << setw(3) << j << " x " << setw(3) << i << " = " << setw(3) << j * i << " | ";
        }
        cout << endl;
    }
}

int main() {
//    box();
//    box2(10, 3);
//    printNumber();
    multiplicationTable(7, 12);
    return 0;
}