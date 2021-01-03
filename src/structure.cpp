#include <iostream>
#include <cmath>

using namespace std;
struct Coor {
    double x, y;
};

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double distance2(Coor p1, Coor p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    cout << distance(1, 5, 7, 10) << endl;
    cout << distance2({1, 5}, {7, 10}) << endl;
//    Coor p1;
//    p1.x = 5;
//    p1.y = 7;
//    cout << p1.x << endl;
//    cout << p1.y << endl;
//
//    cout << "--------" << endl;
//    Coor p2{5, 7};
//    cout << p2.x << endl;
//    cout << p2.y << endl;
//
//    struct Person {
//        string fname, lname;
//        double height, weight;
//        int age;
//    };
//
//    Person ps1{"Peter", "Parker", 170, 68, 22};

    return 0;
}