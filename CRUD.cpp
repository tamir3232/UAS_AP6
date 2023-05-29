#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan data
struct Data {
    int id;
    string nama;
    string email;
};

// fungsi untuk membuat data
Data createData(int id, string nama, string email) {
    Data data;
    data.id = id;
    data.nama = nama;
    data.email = email;
    return data;
}

// Fungsi untuk membaca data
void readData(Data data) {
    cout << "ID: " << data.id << endl;
    cout << "Nama: " << data.nama << endl;
    cout << "Email: " << data.email << endl;
}

// Fungsi untuk update data
void updateData(Data &data, int id, string nama, string email) {
    if (id != -1) {
        data.id = id;
    }
    if (nama != "") {
        data.nama = nama;
    }
    if (email != "") {
        data.email = email;
    }
}

// fungsi untuk menghapus data
void deleteData(Data &data) {
    data.id = -1;
    data.nama = "";
    data.email = "";
}

int main() {
    // Buat beberapa contoh data
    Data myData = createData(1, "Najwa", "najwaafifi@example.com");

    // baca contoh data
    readData(myData);

    // Update contoh data
    updateData(myData, 2, "Najwa", "");

    // baca update contoh data
    readData(myData);

    // hapus contoh data
    deleteData(myData);

    // Baca data sampel yang dihapus
    readData(myData);

    return 0;
}
