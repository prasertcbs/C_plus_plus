#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int rectangle(int w, int h) {
    return w * h;
}

/**
 * Calculate Body Mass Index
 * @param weight in kg.
 * @param height in meters
 * @return body mass index
 */
double bmi(double weight, double height) {
    return weight / (height * height);
}

string bmiEval(double bmi) {
    // https://en.wikipedia.org/wiki/Body_mass_index
    // Japan Society for the Study of Obesity (2000)
    vector<string> category{"Obese L4", "Obese L3", "Obese L2", "Obese L1", "Normal", "Low"};
    double v[]{40, 35, 30, 25, 18.5, 0};
    for (int i = 0; i < category.size(); ++i) {
        if (bmi > v[i]) {
            return category[i];
        }
    }
}

/**
 * sum integer from M to N
 * @param fromN
 * @param toN
 * @return summation M to N
 */
int sumMN(int fromN, int toN) {
    int sum = 0;
    for (int i = fromN; i <= toN; i++) {
        sum += i;
    }
    return sum;
}

/**
 * parking rate calculation
 * @param mm park time in minutes
 * @param ratePerHour park rate per hour
 * @param freeMinute free of charge for parking less than or equal to n minutes
 * @return parking rate
 */
int parkingRate(int mm, int ratePerHour, int freeMinute) {
    int fee = 0;
    if (mm > freeMinute) {
        int hours = mm / 60;
        int minutes = mm % 60;
        if (minutes > 10) {
            hours++; // hours = hours + 1, hours += 1
        }
        fee = hours * ratePerHour;
    }
    return fee;
}

/**
 * PromptPay money transfer fee (max 200,000 baht)
 * @param transferAmt transfer amount
 * @return fee based on transfer amount
 */
double promptPayFee(double transferAmt) {
    double fee = 0;
    if (transferAmt > 200000) {
        throw std::invalid_argument("transfer amount > 200000");
    }
    if (transferAmt > 100000 && transferAmt <= 200000) {
        fee = 10;
    } else if (transferAmt > 30000) {
        fee = 5;
    } else if (transferAmt > 5000) {
        fee = 2;
    } else if (transferAmt > 0) {
        fee = 0;
    }
    return fee;
}

void az() {
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        if (ch != 'Z') {
            cout << ch << "->";
        } else {
            cout << ch;
        }
    }
    cout << endl;
}

void keypad() {
    int cnt = 1;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        if (cnt != 1 && cnt % 4 == 0) {
            cout << endl;
        } else {
            cout << setw(3) << ch;
        }
        cnt++;
    }
    cout << endl;
}

void rainbow() {
    string colors[]{"RED", "ORANGE", "YELLOW", "GREEN", "BLUE", "INDIGO", "VIOLET"};
    for (auto &&item : colors) {
        cout << item[0] << " ";
    }
    cout << endl;
}

double power(double a, double n) {
    double r = 1;
    for (int i = 1; i <= n; ++i) {
        r = r*a;
    }
    return r;
}

void counter() {
    for (int i = 1; i <= 10; ++i) {
        cout << i << endl;
    }
}

void counter2(int fromN, int toN) {
    for (int i = fromN; i <= toN; ++i) {
        cout << i << endl;
    }
}

int main() {
//    cout << sqrt(2.0) << endl;
//    cout << pow(2, 5) << endl;
//    cout << power(2, 5) << endl;
//    counter();
    counter2(5, 20);
    return 0;
}