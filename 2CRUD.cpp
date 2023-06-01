#include <iostream>
#include <vector>

using namespace std;

void tampilkanAngka(const vector<int> & angka){
    cout << "Angka yang tersimpan:\n";
    vector<int>::const_iterator it;
    for (it = angka.begin(); it != angka.end(); ++it){
        cout << *it << " ";
    }
    cout << "\n\n";
}

void tambahAngka(vector<int> & angka){//fungsi untuk menambahkan angka baru
    int input;
    cout << "Masukkan angka baru: ";
    cin >> input;
    angka.push_back(input);//menambahkan angka baru ke dalam vektor angka
    cout << "Angka berhasil ditambahkan!\n\n";
}

void updateAngka(vector<int> & angka){//fungsi untuk mengupdate angka
    int index, input;
    cout << "Masukkan indeks angka yang ingin diupdate: ";
    cin >> index;
    cout << "Masukkan angka baru: ";
    cin >> input;

    if (index >= 0 && index < angka.size()){//memastikan indeks valid dalam vektor angka
        angka[index] = input;//mengupdate nilai angka pada indeks yang diberikan
        cout << "Angka berhasil diupdate!\n\n";
    }else{
        cout << "Indeks angka tidak valid!\n\n";
    }
}

void hapusAngka(vector<int> & angka){//fungsi untuk menghapus angka
    int index;
    cout << "Masukkan indeks angka yang ingin dihapus: ";
    cin >> index;

    if (index >= 0 && index < angka.size()){//memastikan indeks valid dalam vektor angka
        angka.erase(angka.begin() + index);//menghapus elemen dengan indeks yang diberikan dari vektor angka
        cout << "Angka berhasil dihapus!\n\n";
    }else{
        cout << "Indeks angka tidak valid!\n\n";
    }
}

int main(){
    vector<int> angka;//membuat vektor angka untuk menyimpan angka-angka

    int pilihan;

    while (true){
        cout << "Menu:\n";
        cout << "1. Tampilkan Angka\n";
        cout << "2. Tambah Angka\n";
        cout << "3. Update Angka\n";
        cout << "4. Hapus Angka\n";
        cout << "5. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan){
            case 1:
                tampilkanAngka(angka);//memanggil fungsi untuk menampilkan angka
                break;
            case 2:
                tambahAngka(angka);//memanggil fungsi untuk menambahkan angka
                break;
            case 3:
                updateAngka(angka);//memanggil fungsi untuk mengupdate angka
                break;
            case 4:
                hapusAngka(angka);//memanggil fungsi untuk menghapus angka
                break;
            case 5:
                cout << "PROGRAM SELESAI!!\n";
                return 0;//menghentikan program
            default:
                cout << "Pilihan tidak valid!\n\n";
                break;
        }
        cout << "\n";
    }
    return 0;
}

