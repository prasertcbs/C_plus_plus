// Fisher-Yates Shuffle algorithm
// https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
/*
-- To shuffle an array a of n elements (indices 0..n-1):
for i from n−1 downto 1 do
     j ← random integer such that 0 ≤ j ≤ i
     exchange a[j] and a[i]
*/

#include <iostream>
#include <vector>

using namespace std;

void shuffle(int *array, size_t n) {
    for (int i = n - 1; i >= 1; i--) {
        int j = rand() % (i + 1);
//        int t = array[i];
//        array[i] = array[j];
//        array[j] = t;
        swap(array[i], array[j]);
    }
}

int main() {
//    cout << time(nullptr) << endl;
    srand(time(nullptr));
    int a[] = {0, 2, 4, 6, 8};
    size_t len = sizeof(a) / sizeof(a[0]);
    shuffle(a, len);
    for (int i = 0; i < len; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}