#include <iostream>
using namespace std;
 
int main() {

    cout << "Hello, world!" << endl;
    if (true) {
        cout << "Ini blok if" << endl;
    }else{
        cout << "Ini blok else" << endl;
    }
    
	int x = 5;
    cout << "Nilai x: " << x << endl;

    switch (x) {
        case 5: 
            cout << "Nilai x = 5" << endl;
            break;
        default:
            cout << "Nilai x tidak 5" << endl;
    }

  x = 5;
    int* nullPtr = nullptr;
    nullPtr = &x;  
    cout << "Nilai dari nullPtr: " << *nullPtr << endl; 
    delete nullPtr;  

   int* dynamicPtr = new int;
    *dynamicPtr = 7;
    cout << "hasil dari pointer: " << *dynamicPtr << endl;
    delete dynamicPtr;

     int arr[5];
    int* arrptr = arr;
    arrptr[5] = 10;  
    cout << "hasil dari array: " << arr[5] << endl;

    return 0;
}


int tambah(a=3,b=4,c=5){
	int hasil;
	hasil= a+b+c;
    return hasil;
}
cout << "Hasil penjumlahan: " << hasil << Endl;