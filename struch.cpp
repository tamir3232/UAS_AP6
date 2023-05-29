#include <iostream>
 
using namespace std;

struct data_kos{
    string jalan;
    string namaKos;
    int noKos;
};

 
struct data_Mahasiswa {
  string nama;
  int nim;
 int uangKos;
 data_kos mhs;
};

 
int main()
{ data_Mahasiswa user;
cout<<"Masukkan Nama Kos: ";
   cin>>user.mhs.namaKos;
   cout<<"Masukkan Jalan: ";
   cin>>user.mhs.jalan;
   cout<<"masukkan No.kos: ";
   cin>>user.mhs.noKos;
   cout << user.mhs.namaKos <<" bertepatan di jalan " << user.mhs.jalan;
  cout << " dengan No Kos " << user.mhs.noKos << endl;
   


  
return 0;
}