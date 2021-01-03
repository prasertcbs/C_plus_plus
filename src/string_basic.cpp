#include <iostream>

using namespace std;

string upper(string s) {
    for (int i = 0; i < s.size(); ++i) {
        s[i] = toupper(s[i]);
    }
    return s;
}

bool icompare(string s1, string s2) {
//    if(upper(s1) == upper(s2)) {
//        return true;
//    } else {
//        return false;
//    }
    return upper(s1) == upper(s2);
}

int main() {
    string s1;
    s1 = "blue";
    string s2 = "blue";
    string s3 = s1 + "berry";
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    cout << s1.size() << endl;
    cout << s3.size() << endl;

    cout << s3.substr(0, 4) << endl;
    cout << s3.substr(4) << endl;
    cout << s3.substr(4, 3) << endl;

    if (s1 == "Blue") { // case sensitive comparison
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }
//    cout << upper("abc") << endl;
    cout << string(20, '-') << endl;
    cout << icompare(s1, "Blue") << endl;

    string phone = "0891234567"; // -> 089xxxxx67
//    cout << phone.replace(3, 5, "xxxxx") << endl;
    cout << phone.replace(3, 5, string(5, 'x')) << endl;
    cout << "phone = " << phone << endl;

    int pos = s3.find("ry");
    cout << pos << endl;
    cout << s3[pos] << endl;
    cout << s3[pos + 1] << endl;
    return 0;
}