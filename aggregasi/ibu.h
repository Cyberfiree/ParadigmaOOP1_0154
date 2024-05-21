#ifndef IBU_H // Header guard untuk mencegah penggandaan definisi saat file di-include
#define IBU_H

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak; //memanggil kelas anak menggunakan vector //vector = list/array


	// Konstruktor ibu dengan satu parameter untuk menginisialisasi nama
	ibu(string pNama) : nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada\n";
	}

	// Destruktor ibu untuk memberikan pesan ketika ibu dihapus
	~ibu() {
		cout << "Ibu \"" << nama << "\" tidak ada\n";
	};
	void tambahAnak(anak*);     //  untuk menambahkan anak ke dalam daftar anak ibu
	void cetakAnak();			    //  untuk mencetak daftar anak ibu
};
#endif