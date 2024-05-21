#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
	// Membuat objek ibu dan anak
	ibu* varIbu = new ibu("dini");
	ibu* varIbu2 = new ibu("novi");
	anak* varAnak1 = new anak("tono");
	anak* varAnak2 = new anak("rini");
	anak* varAnak3 = new anak("dewi");

	// Menambahkan anak-anak ke dalam daftar ibu
	varIbu->tambahAnak(varAnak1); //memiliki parameter makanya dia memakai varanak atau memanggil argument yg diisi oleh data anak
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	// Mencetak nama-nama anak untuk setiap ibu
	varIbu->cetakAnak(); //tidak memiliki parameter makanya ga ada varanak
	varIbu2->cetakAnak();
}