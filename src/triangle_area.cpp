// ref: https://www.mathopenref.com/coordtrianglearea.html

#include <iostream>
#include <cmath>

using namespace std;

double area(double ax, double ay, double bx, double by, double cx, double cy) {
    return abs((ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) * .5);
}

struct Coor {
    double x, y;
};

double area2(Coor a, Coor b, Coor c) {
    return abs((a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) * .5);
}

int main() {
    cout << area(26, 13, 21, 35, 50, 15) << endl;
    cout << area2({26, 13}, {21, 35}, {50, 15}) << endl;
    Coor a, b;
    a.x = 26;
    a.y = 13;
    b.x = 21;
    b.y = 35;
    Coor c{50, 15};
    cout << area2(a, b, c) << endl;
    return 0;
}