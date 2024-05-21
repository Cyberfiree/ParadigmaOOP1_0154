#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
	string name;
	jantung varJantung; //berelasi dan memanggil kelas jantung

	// Konstruktor manusia
	manusia(string pName)
		: name(pName) {
		cout << name << " hidup\n";
	}

	//destruktor manusia
	~manusia() {
		cout << name << " mati\n";
	}
};
#endif