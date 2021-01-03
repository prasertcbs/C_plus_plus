// https://th.wikipedia.org/wiki/การเรียงลำดับแบบแทรก
#include <iostream>

using namespace std;

void printArray(int a[], size_t sz) {
    for (int i = 0; i < sz; ++i) {
        cout << a[i] << " ";
    }
}

void insertionSort(int a[], size_t sz) {
    for (int i = 1; i <= sz - 1; i++) {
        int item = a[i];
        int cmpPos = i - 1;
        while (cmpPos >= 0 && item < a[cmpPos]) {
            a[cmpPos + 1] = a[cmpPos];
            cmpPos--;
        }
        a[cmpPos + 1] = item;
    }
}

int main() {
    int a[] = {3, 9, 8, 7, 6};
    size_t sz = sizeof(a) / sizeof(a[0]);
    insertionSort(a, sz);
    printArray(a, sz);
    return 0;
}
