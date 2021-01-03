#include <iostream>

using namespace std;

void demo1() {
    double t1 = 27.5;
    double t2 = 24;
    double t3 = 30.5;
    double t4 = 29.5;
    double t5 = 24.5;
    double avg = (t1 + t2 + t3 + t4 + t5) / 5;
    cout << "avg = " << avg << endl;
}

void demo2() {
    double t[5] = {27.5, 24, 30.5, 29.5, 24.5};
//    t[0] ... t[4]
    double sum = 0;
    for (int i = 0; i < 5; i++) {
//        cout << t[i] << endl;
        sum += t[i]; // sum = sum + t[i];
    }
    cout << "avg = " << sum / 5 << endl;
}

void initArray() {
    double t[5] = {27.5, 24, 30.5, 29.5, 24.5};
    double a[] = {27.5, 24, 30.5, 29.5, 24.5}; // initialize
    double b[]{27.5, 24, 30.5, 29.5, 24.5}; // ** C++11 uniform initializer
    double e[5];
    e[0] = 27.5;
    e[1] = 24;
    e[2] = 30.5;
    e[3] = 29.5;
    e[4] = 24.5;

    char x[]{'r', 'p', 's'};
    string flowers[]{"rose", "tulip", "lily"};
//    for(int i=0;i<=2;i++) {
//        cout << flowers[i] << endl;
//    }
    cout << flowers[1] << endl;
}

int main() {
//    demo1();
//    demo2();
    initArray();
    return 0;
}