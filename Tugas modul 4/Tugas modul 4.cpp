#include <iostream>
#include <string>
using namespace std;
string hari[7] = { "Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu" };
string imam[7];

void list_imam() {

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
	int pilihan;
}