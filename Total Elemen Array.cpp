#include <iostream>                                                       

// Fungsi untuk menghitung total elemen dalam sebuah array
int hitungTotalElemen(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int total = hitungTotalElemen(array, size);

    std::cout << "Total elemen array: " << total << std::endl;

    return 0;
}

