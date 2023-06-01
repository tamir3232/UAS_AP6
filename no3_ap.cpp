#include <iostream>
#include <string>

struct Mahasiswa {
    std::string nama;
    int umur;
    std::string jurusan;
    std::string nim;
};

int main() {
    Mahasiswa mhs;

    // Meminta pengguna mengisi data mahasiswa
    std::cout << "Masukkan nama mahasiswa: ";
    std::getline(std::cin, mhs.nama);

    std::cout << "Masukkan umur mahasiswa: ";
    std::cin >> mhs.umur;

    std::cin.ignore(); // Menghapus karakter newline dari input sebelumnya

    std::cout << "Masukkan jurusan mahasiswa: ";
    std::getline(std::cin, mhs.jurusan);

    std::cout << "Masukkan NIM mahasiswa: ";
    std::getline(std::cin, mhs.nim);

    // Menampilkan data mahasiswa yang diisi pengguna
    std::cout << "Data Mahasiswa:" << std::endl;
    std::cout << "Nama: " << mhs.nama << std::endl;
    std::cout << "Umur: " << mhs.umur << " tahun" << std::endl;
    std::cout << "Jurusan: " << mhs.jurusan << std::endl;
    std::cout << "NIM: " << mhs.nim << std::endl;

    return 0;
}
