#include <iostream>
#include <regex>

using namespace std;

string removeNonDigit(string s) {
    string t;
    for (int i = 0; i < s.size(); ++i) {
        if (isdigit(s[i]) || s[i] == '.' || s[i] == '-') {
            t += s[i];
        }
    }
    return t;
}

string removeNonDigit_regex(string s) {
    return regex_replace(s, regex("[^\\d.-]"), "");
}

double str_double(string s) {
    return stod(removeNonDigit_regex(s));
}

void demo() {
    string s = "123";
    int n = stoi(s);

    string s2 = "129.75";
    double d = stod(s2);

    cout << n + 1 << endl;
    cout << d + 1 << endl;
}

void demo2() {
    string s = "-14,790.75";
    double d = stod(s);
    cout << "d = " << d << endl;
//    cout << removeNonDigit(s) << endl;
    double d2 = stod(removeNonDigit(s));
    cout << "d2 = " << d2 << endl;
    double d3 = stod(removeNonDigit_regex(s));
    cout << "d3 = " << d3 << endl;
}

void demo3() {
    string s = "USD1,230.75";
//    string s = "$1,230.75";
//    string s = "70 kg";
    double d = str_double(s);
    cout << d << endl;
    cout << d * 33 << endl;
}

int main() {
//    demo();
//    demo2();
    demo3();
    return 0;
}