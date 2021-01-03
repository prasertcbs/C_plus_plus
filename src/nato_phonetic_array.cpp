// การออกเสียงตัวอักษร โดยระบบ NATO phonetic
// https://en.wikipedia.org/wiki/NATO_phonetic_alphabet
// http://www.osric.com/chris/phonetic.html
#include <iostream>

using namespace std;

string nato(string s) {
    string phonetic[]{
            "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "X-ray",
            "Yankee", "Zulu"
    };
    string number[] {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
//    phonetic['C' - 'A'];
    string ns = "";
    for (int i = 0; i < s.size(); i++) {
//        cout << s[i] << endl;
        if (isalpha(s[i])) {
            ns = ns + phonetic[toupper(s[i]) - 'A'];
        } else if (isdigit(s[i])) {
            ns = ns + number[s[i] - '0'];
        } else {
            ns = ns + s[i];
        }
        ns = ns + ' ';
    }
    return ns;
}

int main() {
    string s;
    cout << "enter text: "; // Peter
    cin >> s;
    cout << nato(s) << endl;
//    cout << (int)'p' << endl;
//    cout << (int)'A' << endl;
    return 0;
}