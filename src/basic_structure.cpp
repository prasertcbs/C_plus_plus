#include <iostream>

using namespace std;

void sequence() {
    int hrs;
    cout << "enter total hours: ";
    cin >> hrs;
    int days = hrs / 24;
    int hours = hrs % 24;
    cout << hrs << " hours = " << days << " days " << hours << " hours";
}

void repetition() {
    for (int k=1; k<=10; k++) {
        cout << k << " kg. = " << k * 2.2046 << " lbs." << endl;
    }
}

void selection() {
    int age;
    cout << "enter your age: ";
    cin >> age;
    if (age <= 5 || age >= 60) {
        cout << "free entrance" << endl;
        cout << "have a nice day" << endl;
    } else {
        cout << "ticket 20 Baht" << endl;
    }
}

int main() {
//    sequence();
//    repetition();
    selection();
    return 0;
}