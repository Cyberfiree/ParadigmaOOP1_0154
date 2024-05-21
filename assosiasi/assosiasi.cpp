#include <iostream>
#include <vector>
using namespace std;

class dokter; // Deklarasi awal kelas dokter agar dapat digunakan di kelas pasien
class pasien { // Kelas pasien
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) :nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada\n";

    }
    ~pasien() {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahDokter(dokter*);
    void cetakDokter();
};

// Kelas dokter
class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pNama) :nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }

    void tambahPasien(pasien*);
    void cetakPasien();
};

// Implementasi fungsi untuk menambahkan dokter ke dalam daftar dokter pasien
void pasien::tambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
}

// Implementasi fungsi untuk mencetak daftar dokter yang menangani pasien
void pasien::cetakDokter() {
    cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
    for (auto& a : daftar_dokter) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

// Implementasi fungsi untuk menambahkan pasien ke dalam daftar pasien dokter
void dokter::tambahPasien(pasien* pPasien) {
    daftar_pasien.push_back(pPasien);
    pPasien->tambahDokter(this);
}

// Implementasi fungsi untuk mencetak daftar pasien dari seorang dokter
void dokter::cetakPasien() {
    cout << "Daftar Pasien dari dokter \"" << this->nama << "\":\n";
    for (auto& a : daftar_pasien) {
        cout << a->nama << "\n";
    }
    cout << endl;
}
int main() // Fungsi utama
{
    // Membuat objek dokter dan pasien
    dokter* varDokter1 = new dokter("dr.Budi");
    dokter* varDokter2 = new dokter("dr.Tono");
    pasien* varPasien1 = new pasien("Andi");
    pasien* varPasien2 = new pasien("Lia");

    // Menambahkan pasien ke dalam daftar pasien dokter
    varDokter1->tambahPasien(varPasien1);
    varDokter1->tambahPasien(varPasien2);
    varDokter2->tambahPasien(varPasien1);

    // Mencetak daftar pasien dari masing-masing dokter
    varDokter1->cetakPasien();
    varDokter1->cetakPasien();
    // Mencetak daftar dokter yang menangani masing-masing pasien
    varPasien1->cetakDokter();
    varPasien2->cetakDokter();

    // Menghapus objek yang dialokasikan secara dinamis dari memori
    delete varPasien1;
    delete varPasien2;
    delete varDokter1;
    delete varDokter2;

    return 0;
}