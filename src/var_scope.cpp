#include <iostream>

using namespace std;

// global variables
double vatRate = .07;
char pool = 'A';
char gym = 'X';

void room1() {
    int bedroom = 30;
    cout << pool << endl;
    cout << gym << endl;
}

void room2() {
    int bedroom = 70;
    char pool = 'W';
    cout << pool << endl;
    cout << vatRate << endl;
}

int fn1() {
    int n = 5;
    int v = 20;
    double vatRate = .10;
    cout << "vatRate = " << vatRate << endl;
    cout << "address " << &n << " value = " << n << endl;
    for (int i = 0; i < 3; ++i) {
        int n = 99;
        cout << "address " << &n << " value = " << n << endl;
    }
    cout << n << endl;
    int j;
    for (j = 10; j < 15; j++) {
    }
    cout << j << endl;
//    cout << i << endl;
}

int main() {
    int n = 10; // local variable
    fn1();
//    cout << v << endl;
    cout << "vatRate = " << vatRate << endl;
    vatRate = .25;
    cout << "vatRate = " << vatRate << endl;
    return 0;
}