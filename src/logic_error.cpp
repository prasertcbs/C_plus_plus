// logic error

#include <iostream>
#include <cmath>
using namespace std;

void demoLogicError() {
    int eng = 80;
    int math = 70;
    int age = 23;

    if(eng > 75 || math > 65 && age > 25) {
        cout << "accept" << endl;
    } else {
        cout << "reject" << endl;
    }
}

void demoLogicError2() {
    int eng = 80;
    int math = 70;
    int age = 23;
    if(eng > 75 || (math > 65 && age > 25)) {
        cout << "accept" << endl;
    } else {
        cout << "reject" << endl;
    }
}

void demoLogicError3() {
    int eng = 80;
    int math = 70;
    int age = 23;
    if((eng > 75 || math > 65) && age > 25) {
        cout << "accept" << endl;
    } else {
        cout << "reject" << endl;
    }
}

int main() {
    demoLogicError();
    demoLogicError2();
    demoLogicError3();
    // cout << 1 / 2 * 5 * 10 << endl;
    // cout << 1.0 / 2 * 5 * 10 << endl;
    // cout << .5 * 5 * 10 << endl;    
    // cout << 1 / 2 * 5 * 3 << endl;
    // cout << .5 * 5 * 3 << endl;
}