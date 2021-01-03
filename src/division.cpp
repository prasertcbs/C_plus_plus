#include <iostream>

using namespace std;

bool isOdd(int n) {
    if (n % 2 == 1) {
        return true;
    } else {
        return false;
    }
//    return n % 2 == 0;
}

bool isEven(int n) {
//    if (n % 2 == 0) {
//        return true;
//    } else {
//        return false;
//    }
    return !isOdd(n);
}

bool leapYear(int year) {
//    if (year % 4 == 0) {
//        return true;
//    } else {
//        return false;
//    }
    return year % 4 == 0;
}

int main() {
//    int a = 5;
//    cout << boolalpha << isOdd(a) << endl;
//    int b = 7;
//    cout << boolalpha << isEven(b) << endl;
    cout << boolalpha << leapYear(2017) << endl;
    return 0;
}