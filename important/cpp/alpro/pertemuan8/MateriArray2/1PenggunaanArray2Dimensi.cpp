#include <iostream>
using namespace std;

int main(){
	int tahun, kode, mahasiswa[3][3];
	
	/* Memberikan data ke array */
	mahasiswa[0][0] = 50;
	mahasiswa[0][1] = 55;
	mahasiswa[0][2] = 45;
	mahasiswa[1][0] = 48;
	mahasiswa[1][1] = 56;
	mahasiswa[1][2] = 60;
	mahasiswa[2][0] = 102;
	mahasiswa[2][1] = 114;
	mahasiswa[2][2] = 124;
	
	/* Proses untuk memperoleh informasi jumlah siswa yang lulus */
	cout << "Kode Konsentrasi Program Studi : 1 = TKJ, 2 = TMJ, 3 = TI : ";
	cin >> kode;
	cout << "Tahun masuk (2011..2013) : ";
	cin >> tahun;
	cout << "Jumlah mahasiswa : " << mahasiswa[kode-1][tahun-2011] << endl;
	
	system("pause");
	return 0;
}
