#include <iostream>                                                       

int menghitung_total(int array[], int size) {
    int jumlah = 0;
    for (int a = 0; a < size; a++) {
        jumlah += array[a];
    }
    return jumlah;
}

int main() {
    int arr[]={10,12,14,16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total = menghitung_total(arr, size);
    std::cout << "hasil elemen array : " << total <<std::endl;

    return 0;
}
