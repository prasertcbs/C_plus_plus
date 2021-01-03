// and &&
// or ||
// not !

#include <iostream>

using namespace std;

void and_demo() {
    // true && true -> true
    // true && false -> false
    // false && true -> false
    // false && false -> false
    int math = 70;
    int eng = 80;
    int interview = 85;
    if (math >= 60 && eng >= 75 && interview >= 80) {
        cout << "pass" << endl;
    } else {
        cout << "fail" << endl;
    }
}

void or_demo() {
    int age = 30;
    bool isStudent = true;
    if (age > 60 || age < 10 || isStudent) {
        cout << "free entrance" << endl;
    } else {
        cout << "pay 50 Baht" << endl;
    }
}

void and_or_demo() {
    int age = 65;
    bool isCitizen = false;
    if ((age > 60 || age < 10) && isCitizen) {
        cout << "free entrance" << endl;
    } else {
        cout << "pay 50 Baht" << endl;
    }
}

void not_demo() {
    string pwd = "lily";
    if (!(pwd == "lily")) {
        cout << "incorrect password" << endl;
    } else {
        cout << "Welcome back...." << endl;
    }
}

int main() {
//    and_demo();
//    or_demo();
//    and_or_demo();
    not_demo();
    return 0;
}