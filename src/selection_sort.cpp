// https://th.wikipedia.org/wiki/การเรียงลำดับแบบเลือก

#include <iostream>
#include <iomanip>

using namespace std;

void printArray(int a[], size_t sz) {
    for (int i = 0; i < sz; ++i) {
        cout << setw(4) << a[i] << " ";
    }
}

void selectionSort(int a[], size_t sz) {
    for (int i = 0; i < sz - 1; i++) {
        int idxMin = i;
        for (int j = i + 1; j <= sz - 1; j++) {
            if (a[j] < a[idxMin]) {
                idxMin = j;
            }
        }
        swap(a[i], a[idxMin]);
        printArray(a, sz);
        cout << " | swap(" << a[i] << "<->" << a[idxMin] << ")" << endl;
    }
}

int main() {
    int a[] = {8, 10, 3, 9, 4, 7};
    size_t sz = sizeof(a) / sizeof(a[0]);
    printArray(a, sz);
    cout << endl;

    selectionSort(a, sz);
    cout << "-----------" << endl;
    printArray(a, sz);
    return 0;
}