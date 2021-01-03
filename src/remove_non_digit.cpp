#include <iostream>

using namespace std;

bool isNumber(char ch) {
//    if (ch >= '0' && ch <= '9') {
//        return true;
//    } else {
//        return false;
//    }
    return (ch >= '0' && ch <= '9');
}

bool isNumber2(char ch) {
    return (ch >= '0' && ch <= '9') || (ch == '-' || ch == '(' || ch == ')');
}

string removeNonDigit(string s) {
    string dest = "";
    for (int i = 0; i < s.size(); i++) {
        if (isNumber(s[i])) {
//            cout << s[i] << endl;
            dest = dest + s[i];
        }
    }
    return dest;
}

int main() {
    string s = "T:(089)123-4567";
    cout << removeNonDigit(s) << endl;
    return 0;
}