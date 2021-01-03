#include <iostream>

using namespace std;

double gradePoint(string gradeletter) {
    if (gradeletter == "A") {
        return 4;
    } else if (gradeletter == "B+") {
        return 3.5;
    } else if (gradeletter == "B") {
        return 3;
    } else if (gradeletter == "C+") {
        return 2.5;
    } else if (gradeletter == "C") {
        return 2;
    } else if (gradeletter == "D+") {
        return 1.5;
    } else if (gradeletter == "D") {
        return 1;
    } else if (gradeletter == "F") {
        return 0;
    } else {
        return 0;
    }
}

int main() {
    // input
    cout << "enter number of subjects: ";
    int subjects;
    cin >> subjects;
    double totalPoints = 0;
    double totalCredits = 0;
    for (int i = 0; i < subjects; ++i) {
        cout << "enter credits grade (e.g., 3 B): ";

        // process
        double credits;
        string gradeletter; // "B+"
        cin >> credits >> gradeletter;
        totalCredits += credits;
        totalPoints += credits * gradePoint(gradeletter);
    }

    // output
    cout << "total credits = " << totalCredits << endl;
    cout << "total points  = " << totalPoints << endl;
    cout << "GPA = " << totalPoints / totalCredits;
    return 0;
}