#include <iostream>
using namespace std;

int main() {
    // int (integer), double/float
    // char, string

    // type var_name
    int a; // declaration
    int m, n;

    a = 5; // assignment
    a = 5 *3;

    int b = 10;

    int d = 3.75; // implicit conversion
    cout << "d = " << d << endl;

    double x = 3.75;
    cout << "x = " << x << endl;

    double y;

    int u;
    cout << "u = " << u << endl; // undefined behavior

    char grade;
    grade = 'A';
    cout << grade << endl;

    string movie;
    movie = "Finding Nemo";
    cout << movie << endl;

    string flower = "lily"; // declare + assign
    cout << flower << endl;

    double w, h;
    cout << "enter width = ";
    cin >> w;
    cout << "enter height = ";
    cin >> h;
    double area = w * h;
    cout << "w x h = " << area << endl;
    return 0;
}