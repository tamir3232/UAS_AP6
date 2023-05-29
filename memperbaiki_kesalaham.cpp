#include <iostream>

int tambah(int a, int b);

int main() {
    
    std::cout << "Hello, world!" << std::endl;

    if (true) {
        std::cout << "Ini blok if" << std::endl;
    } else {
        std::cout << "Ini blok else" << std::endl;
    }

    int x = 5;
    std::cout << "Nilai x: " << x << std::endl;

    int hasil = tambah(3, 4); 
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;

    switch (x) {
        case 5: 
            std::cout << "Nilai x adalah 5" << std::endl;
            break;
        default:
            std::cout << "Nilai x bukan 5" << std::endl;
    }

    int* ptr;
    ptr = new int; 
    *ptr = 10;

    int y = 5; 
    int* nullPtr = nullptr;
    nullPtr = &y;

    delete nullPtr;

    int* dynamicPtr = new int;
    *dynamicPtr = 7;
    delete dynamicPtr;
    dynamicPtr = nullptr; 
    int arr[5];
    int* arrPtr = arr;
    arrPtr[4] = 10; 

    return 0;
}

int tambah(int a, int b) {
    return a + b;
}
