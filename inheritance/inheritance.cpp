#include <iostream>
#include <string>
using namespace std;


// Kelas induk (base class) orang
class orang {
public:
    string nama;

    // Konstruktor untuk kelas orang
    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat\n" << endl;
    }

    // Destruktor untuk kelas orang
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }

    // Fungsi untuk menghitung jumlah
    int jumlah(int a, int b) {
        return a + b;
    }
};

// Kelas anak (derived class) pelajar yang mewarisi dari kelas orang
class pelajar : public orang {
public:
    string sekolah;

    // Konstruktor untuk kelas pelajar, memanggil konstruktor kelas orang
    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "pelajar dibuat\n" << endl;
    }


    // Destruktor untuk kelas pelajar
    ~pelajar() {
        cout << "pelajar dihapus\n" << endl;
    }

    // Fungsi untuk membuat perkenalan pelajar
    string perkenalan() {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
    }
};
int main()
{
    // Membuat objek siswa1 dari kelas pelajar
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");
    cout << siswa1.perkenalan();    // Mencetak hasil perkenalan siswa1
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;   // Memanggil fungsi jumlah dari kelas orang melalui objek siswa1

    return 0;
}