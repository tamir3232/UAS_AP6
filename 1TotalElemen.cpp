//Total elemen array

#include <iostream>
using namespace std;

int hitungTotal(int array[], int size){ //program jumlah seluruh elemen array	
    int total = 0;
    for (int i = 0; i < size; i++){//looping untung menghitung jumlah elemen pada array
        total += array[i];
    }
    return total;
}

int main() {
	int size;
	cout << "Masukkan Batas Array : "; //batas array
	cin >> size;
	
	int array[size];
	for (int i = 0; i < size; i++){ //looping untuk user menginput nilai pada setiap elemen array
        cout << "Masukkan nilai ke-" << i+1 << ": ";
        cin >> array[i];
    }
    
	int hasil = hitungTotal(array, size); //memanggil fungsi hitungTotal

	cout << "Total elemen dalam array: " << hasil << endl; //output total elemen

return 0;
}


