#include <iostream>
#include <string>
using namespace std;
string jadwal()
{
	string hari[7] = {"Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu"};
	string matkul[7][100];
	int jumlah_matkul;
	int i;
	for (i = 0; i < 7; i++) {
		if (i == 0) {
			cout << "Ada berapa mata kuliah di hari senin?" << endl;
			cin >> jumlah_matkul;
			cout << "Masukkan nama mata kuliah: ";
			for
			cin >> matkul[0][jumlah_matkul];
			return matkul[0][jumlah_matkul];
		}
		else if (i == 1) {
			cout << "Ada berapa mata kuliah di hari selasa?" << endl;
			cin >> jumlah_matkul;
			cout << "Masukkan nama mata kuliah: ";
			cin >> matkul[1][jumlah_matkul];
			return matkul[1][jumlah_matkul];
		}
		else if (i == 2) {
			cout << "Ada berapa mata kuliah di hari selasa?" << endl;
			cin >> jumlah_matkul;
			cout << "Masukkan nama mata kuliah: ";
			cin >> matkul[2][jumlah_matkul];
			return matkul[2][jumlah_matkul];
		}
		else if (i == 3) {
			cout << "Ada berapa mata kuliah di hari selasa?" << endl;
			cin >> jumlah_matkul;
			cout << "Masukkan nama mata kuliah: ";
			cin >> matkul[3][jumlah_matkul];
			return matkul[3][jumlah_matkul];
		}
		else if (i == 4) {
			cout << "Ada berapa mata kuliah di hari selasa?" << endl;
			cin >> jumlah_matkul;
			cout << "Masukkan nama mata kuliah: ";
			cin >> matkul[4][jumlah_matkul];
			return matkul[4][jumlah_matkul];
		}
		else if (i == 5) {
			cout << "Ada berapa mata kuliah di hari selasa?" << endl;
			cin >> jumlah_matkul;
			cout << "Masukkan nama mata kuliah: ";
			cin >> matkul[5][jumlah_matkul];
			return matkul[5][jumlah_matkul];
		}
		else if (i == 6) {
			cout << "Ada berapa mata kuliah di hari selasa?" << endl;
			cin >> jumlah_matkul;
			cout << "Masukkan nama mata kuliah: ";
			cin >> matkul[6][jumlah_matkul];
			return matkul[6][jumlah_matkul];
		}
	}
}

int main()
{
	cout << "Selamat datang di program jadwal" << endl;
	jadwal();
}