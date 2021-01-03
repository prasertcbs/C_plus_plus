#include <iostream>
#include <iomanip>

using namespace std;

void demoAdd() {
    int a[2][3]{
            {7,  6,  8},
            {20, 25, 10}
    };
    int b[][3]{
            {5,  8,  1},
            {10, 20, 30}
    };
    int c[2][3];

    size_t rows = sizeof(a) / sizeof(a[0]);
    size_t cols = sizeof(a[0]) / sizeof(a[0][0]);

    int d[rows][cols];
//    cout << rows << endl;
//    cout << cols << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << setw(4) << c[i][j] << " |";
        }
        cout << endl;
    }
}

void demoIdentityMatrix() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
            cout << setw(4) << a[i][j] << " |";
        }
        cout << endl;
    }
}

void demoIdentityMatrix2() {
    int a[3][3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                a[i][j] = 1;
            }
            cout << setw(4) << a[i][j] << " |";
        }
        cout << endl;
    }
}

int main(int argc, char *argv[]) {
//    demoAdd();
//    demoIdentityMatrix();
    demoIdentityMatrix2();
    return 0;
}