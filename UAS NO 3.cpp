#include<iostream>
using namespace std;

struct mahasiswa {
	string nama,universitas,jurusan;
	int nim;
};

int main(){
	struct mahasiswa ms1,ms2; // ms(mahasiswa)
	
	ms1.nama="ANGGARDA MUHAMMAD AZIZ";
	ms1.universitas="UNIVERSITAS SUMATERA UTARA";
	ms1.jurusan="ILMU KOMPUTER";
	ms1.nim=221401086;
	
	ms2.nama="FACHRY AZIZ";
	ms2.universitas="UNIVERSITAS SUMATERA UTARA";
	ms2.jurusan="TEKNIK ELEKTRO";
	ms2.nim=225460097;
	
	cout<< ms1.nama<<" kuliah di "<<ms1.universitas<<" jurusan "<<ms1.jurusan<<" dengan nim "<<ms1.nim<<"\t"<<endl;
	cout<< ms2.nama<<" kuliah di "<<ms2.universitas<<" jurusan "<<ms2.jurusan<<" dengan nim "<<ms2.nim<<"\t"<<endl;
	}