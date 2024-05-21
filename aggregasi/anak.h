#ifndef ANAK_H // Header guard untuk mencegah penggandaan definisi saat file di-include
#define ANAK_H

class anak {
public:
	string nama; // Attribut untuk menyimpan nama anak
	anak(string pNama) : nama(pNama) {   // Konstruktor anak dengan satu parameter untuk menginisialisasi nama
		cout << "Anak \"" << nama << "\" ada \n";
	}
	~anak() {   // Destruktor anak untuk memberikan pesan ketika anak dihancurkan
		cout << "Anak \"" << nama << "\" tidak ada \n";
	}
};
#endif
