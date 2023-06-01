#include <iostream>
using namespace std;

struct orang{//struct orang yang berisi setiap variabel
    string name;//nama
    double weight;//berat badan
    double height;//tinggi badan
};

int main(){
    int n; //variabel untuk total jumlah orang

    cout << "Masukkan jumlah orang: ";
    cin >> n;
    
	orang* Torang = new orang[n]; //membuat struct menjadi sebuah array agar bisa diinput sesuai dengan jumlah

    for (int i = 0; i < n; i++){ //looping untuk setiap struct nama, berat bada, tinggi badan
        cout << "\nOrang " << i+1 << endl;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, Torang[i].name);//nama

        cout << "Berat badan (kg): ";
        cin >> Torang[i].weight;//berat badan

        cout << "Tinggi badan (cm): ";
        cin >> Torang[i].height;//tinggi badan
    }

    cout << "\nData Setiap Orang:\n";
	system("CLS");
	
    for (int i = 0; i < n; i++){ //output setiap orang
        cout << "\nOrang " << i+1 << endl;
        cout << "Nama: " << Torang[i].name << endl;
        cout << "Berat badan: " << Torang[i].weight << " kg" << endl;
        cout << "Tinggi badan: " << Torang[i].height << " cm" << endl;
    }
    
return 0;
}

