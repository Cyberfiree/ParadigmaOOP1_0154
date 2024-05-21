#include <iostream>
#include <string>
using namespace std;

#include "Jantung.h"
#include "manusia.h"

int main()
{
	manusia* varManusia = new manusia("Jono"); // Membuat objek manusia secara dinamis dengan nama "Jono"
	delete varManusia; //menghapus obyek yg telah dibuat // Menghapus objek manusia
	return 0;
}