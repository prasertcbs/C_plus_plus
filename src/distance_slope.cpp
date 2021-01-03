#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

double slope(double x1, double y1, double x2, double y2) {
    return (y1-y2)/(x1-x2);
}

int main() {
    double x1, y1, x2, y2;
    // double distance;
    // x1 = 0;
    // y1 = 0;
    // x2 = 4;
    // y2 = 3;
    // input
    cout << "enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;
    // distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    // process + output
    cout << "distance = " << distance(x1, y1, x2, y2) << endl;

    // double slope = (y1-y2)/(x1-x2);
    // double s = slope(x1, y1, x2, y2);
    // cout << "slope = " << s << endl;
    
    cout << "slope = " << slope(x1, y1, x2, y2) << endl;
    return 0;
}