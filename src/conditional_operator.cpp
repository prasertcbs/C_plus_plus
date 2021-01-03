#include <iostream>

using namespace std;

int price(int age) {
    int perhead = 0;
    if (age > 10) {
        perhead = 299;
    } else {
        perhead = 100;
    }
    return perhead;
}

int price2(int age) {
    // conditional operator
    // ternary ?:
    int perhead = age > 10 ? 299 : 100;
    return perhead;
}

double discountRate(char memberType) {
//    if (memberType == 'G') {
//        return .2;
//    } else {
//        return .1;
//    }
    return (memberType == 'G') ? .2 : .1;
}

double discountRate2(char memberType) {
//    if (memberType == 'G') {
//        return .2;
//    } else if (memberType == 'S') {
//        return .1;
//    } else if (memberType == 'B') {
//        return .05;
//    } else {
//        return 0;
//    }
    return (memberType == 'G') ? .2 : (memberType == 'S') ? .1 : (memberType == 'B') ? .05 : 0;
}

int main() {
//    cout << price(25) << endl;
//    cout << price2(25) << endl;
//    cout << price(7) << endl;
//    cout << price2(7) << endl;
    cout << discountRate2('G') << endl;
    cout << discountRate2('S') << endl;
    cout << discountRate2('B') << endl;
    cout << discountRate2('x') << endl;
    return 0;
}