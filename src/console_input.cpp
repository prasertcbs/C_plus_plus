#include <iostream>
using namespace std;

void demo1() {
    cout << "enter your favorite movie: ";
    string movie;
    cin >> movie;
    cout << movie << endl;
}

void demo2() {
    cout << "enter your favorite movie: ";
    string movie;
    getline(cin, movie);
    cout << movie << endl;
}

void demo3() {
    string name;
    double w, h;
    cout << "enter name weight height -> ";
    cin >> name >> w >> h;
    cout << "name = " << name << endl;
    cout << "w = " << w << endl;
    cout << "h = " << h << endl;
}

void demo4() {
    string fname, lname;
    cout << "enter first and last name: ";
    cin >> fname >> lname;
    cout << "fname = " << fname << " lname = " << lname;
}
int main() {
//    demo1();
//    demo2();
//    demo3();
    demo4();
    return 0;
}