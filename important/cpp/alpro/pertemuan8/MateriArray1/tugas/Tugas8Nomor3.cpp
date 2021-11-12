#include <iostream>
using namespace std;

int main(){
	float NilaiMahasiswa[10], Jumlah = 0, RataRata;
	
	//memasukkan nilai array sekaligus menjumlahkan nilai
	for(int i = 0; i < 10; i++){
		cout << "Mahasiswa ke-" << i + 1 << ": ";
		cin >> NilaiMahasiswa[i];
		Jumlah += NilaiMahasiswa[i];
	}
	cout << endl;
	
	//proses menghitung dan menampilkan hasil rata-rata
	RataRata = Jumlah / 10;
	cout << "Jadi, nilai rata-rata dari 10 mahasiswa adalah " << RataRata << endl;
	
	system("pause");
	return 0;
}
