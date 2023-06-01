#include <iostream>
using namespace std;

// Fungsi untuk menghitung total elemen dalam sebuah array
int hitungTotal(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int array[] = {2, 4, 6, 8, 10};  // Array contoh

    int size = sizeof(array) / sizeof(array[0]); // Menghitung ukuran array

    int total = hitungTotal(array, size); // Memanggil fungsi hitungTotal

    cout << "Total elemen dalam array: " << total << endl;

    return 0;
}
