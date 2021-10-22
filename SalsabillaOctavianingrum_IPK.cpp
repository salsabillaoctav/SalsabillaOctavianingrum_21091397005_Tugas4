#include <iostream>
using namespace std;

int main()
{
	int i, j, matkul, sks, jumSmt, smt, nilai_mk;
	char nilai;
	float ipk, ip, sks_tot, nilai_tot;
	string namaMk;

	cout << "Program Menghitung IPK Mahasiswa" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "Masukkan Jumlah Semester : "; cin >> jumSmt;
	cout << endl;

	for (i=1; i<=jumSmt; i++){
		cout << "Masukkan Jumlah Mata Kuliah Semester " << i << " : "; cin >> matkul;
		for (j=1; j<=matkul; j++){
			cout << "Nama Mata Kuliah Ke-" << j << ": "; cin >> namaMk;
			cout << "Masukkan Jumlah SKS Mata Kuliah Ke-" << j << " : "; cin >> sks;
			cout << "Masukkan Nilai Mata Kuliah Ke-" << j << " (A/B/C/D/E) : "; cin >> nilai;
			cout << "------------------------------------------------" << endl;

			if (nilai == 'A'){
				nilai_mk = 4*sks;
			}
			else if (nilai == 'B') {
            	nilai_mk = 3*sks;
          	}
          	else if (nilai == 'C') {
            	nilai_mk = 2*sks;
          	}
          	else if (nilai == 'D') {
            	nilai_mk = 1*sks;
          	}
          	else if (nilai == 'E') {
            	nilai_mk = 0*sks;
          	}
          	else {
            	cout << "Input Salah!\n";
          	}
          	nilai_tot = nilai_tot + nilai_mk;
          	sks_tot = sks_tot + sks;
		}
			ip = nilai_tot/sks_tot;
			cout << "Total IP : " << ip << endl;
			cout << "------------------------------------------------" << endl;
	}
	if (jumSmt == 1){
		ipk = ip;
		cout << "Total IPK = " << ipk;
	}
	else if (jumSmt >= 1 && jumSmt <= 14){
		ip = ip+smt;
		ipk = ip/sks_tot;
		cout << "Total IPK = " << ipk;
	}
}
