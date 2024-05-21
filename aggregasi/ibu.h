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


// Definisi fungsi tambahAnak di luar kelas
void ibu::tambahAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}

// Definisi fungsi cetakAnak di luar kelas
void ibu::cetakAnak() {
	cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif