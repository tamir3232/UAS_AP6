#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menampilkan data
void tampilkanData(const vector<int>& data) {
    cout << "Data saat ini: ";
    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk menambahkan data
void tambahData(vector<int>& data, int nilai) {
    data.push_back(nilai);
    cout << "Data berhasil ditambahkan." << endl;
}

// Fungsi untuk mengupdate data
void updateData(vector<int>& data, int index, int nilai) {
    if (index >= 0 && index < data.size()) {
        data[index] = nilai;
        cout << "Data berhasil diupdate." << endl;
    } else {
        cout << "Indeks tidak valid." << endl;
    }
}

// Fungsi untuk menghapus data
void hapusData(vector<int>& data, int index) {
    if (index >= 0 && index < data.size()) {
        data.erase(data.begin() + index);
        cout << "Data berhasil dihapus." << endl;
    } else {
        cout << "Indeks tidak valid." << endl;
    }
}

int main() {
    vector<int> data; // Vektor untuk menampung data

    while (true) {
        cout << "Pilih operasi CRUD: " << endl;
        cout << "1. Tampilkan data" << endl;
        cout << "2. Tambah data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Hapus data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";

        int pilihan;
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanData(data);
                break;
            case 2: {
                int nilai;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                tambahData(data, nilai);
                break;
            }
            case 3: {
                int index, nilai;
                cout << "Masukkan indeks: ";
                cin >> index;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                updateData(data, index, nilai);
                break;
            }
            case 4: {
                int index;
                cout << "Masukkan indeks: ";
                cin >> index;
                hapusData(data, index);
                break;
            }
            case 5:
                cout << "Terima kasih! Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    }

    return 0;
}
