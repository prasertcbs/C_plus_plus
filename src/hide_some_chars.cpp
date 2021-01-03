#include <iostream>

using namespace std;

string hideChars(string s, int start, int len) {
    string hs;
    for (int i = 0; i < s.size(); i++) {
        if (i >= start && i < start + len) {
            if (s[i] != ' ') {
                hs += 'x';
            } else {
                hs += ' ';
            }
        } else {
            hs += s[i];
        }
    }
    return hs;
}

string hideChars2(string s, int start, int len) {
    string hs = s;
    for (int i = 0; i < s.size(); ++i) {
        if (i >= start && i < start + len) {
            if (s[i] != ' ') {
                hs[i] = 'x';
            }
        }
    }
    return hs;
}

int main() {
    string s;
    cout << "enter text: ";
//    cin >> s;
    getline(cin, s);
    cout << hideChars(s, 3, 9) << endl;
    cout << hideChars2(s, 3, 9) << endl;
    return 0;
}