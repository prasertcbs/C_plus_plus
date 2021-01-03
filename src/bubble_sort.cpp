// https://th.wikipedia.org/wiki/การเรียงลำดับแบบฟอง
#include <iostream>
#include <iomanip>

using namespace std;

void printArray(int a[], size_t sz) {
    for (int i = 0; i < sz; ++i) {
        cout << setw(4) << a[i];
    }
}

void bubbleSort(int a[], size_t sz) {
    size_t n = sz;
    bool swapFlag;
    do {
        swapFlag = false;
        for (int i = 1; i <= n - 1; i++) {
            if (a[i - 1] > a[i]) {
                std::swap(a[i - 1], a[i]);
                swapFlag = true;
                printArray(a, sz);
                cout << endl;
            }
        }
        n--;
    } while (swapFlag);
}

int main() {
    int a[] = {6, 5, 3, 1, 8, 7, 2, 4};
    size_t sz = sizeof(a) / sizeof(a[0]);
    printArray(a, sz);
    cout << endl;
    bubbleSort(a, sz);
    printArray(a, sz);
    return 0;
}