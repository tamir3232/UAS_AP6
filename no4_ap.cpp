#include <iostream>

int tambah(int a, int b, int c) {
    return a + b + c;
}

int main() {
    std::cout << "Hello, world!" << std::endl;

    if (true) {
        std::cout << "Ini blok if" << std::endl;
    } else {
        std::cout << "Ini blok else" << std::endl;
    }

    int x = 5;
    std::cout << "Nilai x: " << x << std::endl;

    int hasil = tambah(3, 4, 5);
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;

    switch (x) {
        case 5:
            std::cout << "Nilai x adalah 5" << std::endl;
            break;
        default:
            std::cout << "Nilai x bukan 5" << std::endl;
    }

    int* ptr;
    int y = 10;
    ptr = &y;
    std::cout << "Nilai yang ditunjuk oleh ptr: " << *ptr << std::endl;

    int* dynamicPtr = new int;
    *dynamicPtr = 7;
    std::cout << "Nilai yang ditunjuk oleh dynamicPtr: " << *dynamicPtr << std::endl;
    delete dynamicPtr;
    dynamicPtr = new int;
    *dynamicPtr = 20;
    std::cout << "Nilai yang ditunjuk oleh dynamicPtr setelah delete: " << *dynamicPtr << std::endl;
    delete dynamicPtr;

    int arr[5];
    int* arrPtr = arr;
    arrPtr[4] = 10;
    std::cout << "Nilai pada elemen ke-4 array: " << arrPtr[4] << std::endl;

    return 0;
}
