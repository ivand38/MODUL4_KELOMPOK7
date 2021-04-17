#include <iostream>
#include <string>
using namespace std;
string hari[7] = { "Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu" };
string imam[7];

void list_imam() {
		for (i=0; i < 7; i++) {
			cout << "Hari " << hari[i] << " : " << imam[i] << endl;
}

string isi_imam() {
	int i;
	cout << "Isi nama Imam pada hari yang tersedia: "<<endl;
		for (i = 0; i < 7; i++) {
			cout << "Hari " << hari[i] << " : " << imam[i] << endl;
			cin >> imam[i];
	}
		return imam[i];
}

int main()
{
	menu:
	void menu() {
	clear_screen();
	cout << "-------- Menu ----------\n";
	cout << " 1. Daftar Imam        \n";
	cout << " 2. List Imam       \n";
	cout << " 3. Exit                \n";
	cout << "----------------------\n";
	cout << "Masukan Pilihan anda = ";
	cin >> selected_menu;
}
	int pilihan;
}
