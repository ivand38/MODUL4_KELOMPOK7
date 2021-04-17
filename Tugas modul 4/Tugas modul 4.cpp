#include <iostream>
#include <string>
using namespace std;
string hari[7] = { "Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu" };
string imam[7];
int i;

void list_imam() {
		for (i=0; i < 7; i++) {
			cout << "Hari " << hari[i] << " : " << imam[i] << endl;
}

string isi_imam() {
	cout << "Isi nama Imam pada hari yang tersedia: "<<endl;
		for (i = 0; i < 7; i++) {
			cout << "Hari " << hari[i] << " : " << imam[i] << endl;
			cin >> imam[i];
	}
		return imam[i];
}

int main()
{
	int selected_menu;
	menu:
	clear_screen();
	cout << "-------- Menu ----------\n";
	cout << " 1. Daftar Imam        \n";
	cout << " 2. List Imam       \n";
	cout << " 3. Exit                \n";
	cout << "----------------------\n";
	cout << "Masukan Pilihan anda = ";
	cin >> selected_menu;
}
	
	switch (selected_menu) 

	{ 

	case 1: 

		isi_imam(); 

		goto menu; 

	case 2: 

		list_imam(); 

		goto menu; 

	case 3: 

		cout << "Terima kasih telah memakai program ini"; 

		break; 

	default: 

		cout << "Anda salah memasukkan angka. Coba lagi"<<endl; 

		goto menu; 
