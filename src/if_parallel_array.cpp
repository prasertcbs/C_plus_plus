#include <iostream>

using namespace std;

string letterGrade(double score) {
    string grade = "F";
    if (score >= 95) {
        grade = "A+";
    } else if (score >= 90) {
        grade = "A";
    } else if (score >= 85) {
        grade = "B+";
    } else if (score >= 80) {
        grade = "B";
    } else if (score >= 70) {
        grade = "C";
    } else if (score >= 50) {
        grade = "D";
    }
    return grade;
}

/**
 * use parallel array technique to calculate letter grade
 * @param score
 * @return
 */
string letterGrade2(double score) {
    double r[] = {95  , 90 , 85  , 80 , 70 , 50 , 0};
    string g[] = {"A+", "A", "B+", "B", "C", "D", "F"};
    for (int i = 0; i < sizeof(r)/sizeof(r[0]); ++i) {
        if (score >= r[i]) {
            return g[i];
        }
    }
}
int main() {
//    cout << letterGrade(95) << endl;
    for (int i = 40; i < 101; ++i) {
        cout << "score = " << i << " grade = " << letterGrade2(i) << endl;
    }
    return 0;
}