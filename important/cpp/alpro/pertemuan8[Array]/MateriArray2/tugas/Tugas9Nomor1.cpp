#include <iostream>
using namespace std;

int main(){
	int i, j, Baris, Kolom;
	
	//proses menentukan ukuran baris dan kolom
	cout << "Baris: ";
	cin >> Baris;
	cout << "Kolom: ";
	cin >> Kolom;
	cout << endl;
	
	int MatriksA[Baris][Kolom], MatriksB[Baris][Kolom], MatriksC[Baris][Kolom];
	
	//memasukkan nilai-nilai matriks A
	cout << "Memasukkan nilai-nilai matriks A:\n";
	for(i = 0; i < Baris; i++){
		for(j = 0; j < Kolom; j++){
			cout << "Matriks A[" << i << "][" << j << "]: ";
			cin >> MatriksA[i][j];
		}
	}
	cout << endl;
	
	//menampilkan isi matriks A
	cout << "Matriks A\n";
	for(i = 0; i < Baris; i++){
		for(j = 0; j < Kolom; j++){
			cout << MatriksA[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	//memasukkan nilai-nilai matriks B sekaligus proses menambahkannya ke martiks C
	cout << "Memasukkan nilai-nilai matriks B:\n";
	for(i = 0; i < Baris; i++){
		for(j = 0; j < Kolom; j++){
			cout << "Matriks B[" << i << "][" << j << "]: ";
			cin >> MatriksB[i][j];
			MatriksC[i][j] = MatriksA[i][j] + MatriksB[i][j];
		}
	}
	cout << endl;
	
	//menampilkan isi matriks B
	cout << "Matriks B\n";
	for(i = 0; i < Baris; i++){
		for(j = 0; j < Kolom; j++){
			cout << MatriksB[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	//menampilkan isi matriks C
	cout << "Penjumlahan matriks A dan matriks B adalah:\n";
	for(i = 0; i < Baris; i++){
		for(j = 0; j < Kolom; j++){
			cout << MatriksC[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	system("pause");
	return 0;
}
