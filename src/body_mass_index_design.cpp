// http://www.bangpakokhospital.com/care_blog/content/วีธีคำนวณดัชนีมวลกายBMI

#include <iostream>

using namespace std;

double bmi(double weight, double height) {
    return weight / (height * height);
}

string evalBmi(double bmi) {
    // parallel array
    string category[]{"Obese L2", "Obese L1", "Overweight", "Normal", "Low"};
    double bmiRange[]{30, 25, 23, 18.5, 0};
    for (int i = 0; i < 5; ++i) {
        if (bmi >= bmiRange[i]) {
            return category[i];
        }
    }
}

double targetWeight(double height, double targetBMI) {
    return height * height * targetBMI;
}

int main() {
    // input
    cout << "enter weight(kg.) height(m) ";
    double weight, height;
    cin >> weight >> height;
    // process
    double bodyMassIndex = bmi(weight, height);
    // output
    cout << "BMI = " << bodyMassIndex << endl;
    cout << "BMI category = " << evalBmi(bodyMassIndex) << endl;
    if (bodyMassIndex < 18.5) {
        cout << "target weight = " << targetWeight(height, 18.5) << endl;
    } else if (bodyMassIndex > 23) {
        cout << "target weight = " << targetWeight(height, 23) << endl;
    }
}