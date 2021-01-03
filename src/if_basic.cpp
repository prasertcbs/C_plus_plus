// if ... else

#include <iostream>

using namespace std;

void greeting(string lang) {
    if (lang == "th") {
        cout << "sawadee" << endl;
    } else if (lang == "cn") {
        cout << "ni hao" << endl;
    } else if (lang == "en") {
        cout << "hello" << endl;
    } else if (lang == "mm") {
        cout << "min gala ba" << endl;
    } else {
        cout << ":-)" << endl;
    }
    cout << "-------------" << endl;
}

int main2() {
    // ==, !=, >, <, >=, <=, && (and), || (or), ! (not)

    int age = 19;
    if (age == 18) {
        cout << "You're 18." << endl;
        cout << ":-)";
    } else {
        cout << "You're not 18." << endl;
    }
//    if (age == 18)
//        cout << "You're 18.";

    int n = 10;
    if (n != 10) {
        cout << "n is not equal to 10." << endl;
    }

    string day = "mon";
    if (day == "mon") {
    }
    if (day != "sun") {
    }

    int height = 110;
    if (age < 10 && height <= 100) {
        cout << "free ticket" << endl;
    } else {
        cout << "25 baht." << endl;
    }

    if ((age < 10 && height <= 100) || age >= 60) {
        cout << "free ticket";
    }
    return 0;
}

int main() {
    greeting("th");
    return 0;
}