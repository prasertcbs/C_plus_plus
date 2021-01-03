#include <iostream>
#include <sstream>

using namespace std;

void demo() {
    string s = "   Clark    Kent   "; // whitespaces
    string fname, lname;
    stringstream ss;
    ss << s;
    ss >> fname >> lname;
    cout << "fname = " << "[" << fname << "]" << endl;
    cout << "lname = " << "[" << lname << "]" << endl;
}

void demo_cin() {
    string fname, lname;
    cout << "enter first and last name: ";
    cin >> fname >> lname;
    cout << "fname = " << "[" << fname << "]" << endl;
    cout << "lname = " << "[" << lname << "]" << endl;
}

struct PersonName {
    string fname, lname;
    char gender;
    int age;
};

PersonName split(string fullname) {
    PersonName name;
    stringstream ss;
    ss << fullname;
    ss >> name.fname >> name.lname >> name.gender >> name.age;
    return name;
}

int main() {
//    demo();
//    demo_cin();
    PersonName name = split("Peter    \tParker M 25");
    cout << "fname  = " << "[" << name.fname << "]" << endl;
    cout << "lname  = " << "[" << name.lname << "]" << endl;
    cout << "gender = " << "[" << name.gender << "]" << endl;
    cout << "age    = " << "[" << name.age << "]" << endl;
    return 0;
}