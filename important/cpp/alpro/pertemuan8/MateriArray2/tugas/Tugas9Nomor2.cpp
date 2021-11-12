#include <iostream>
using namespace std;

int main(){
	int i, j, k, Ordo, Hasil;
	
	//menentukan ordo matriks
	cout << "Ordo matriks: ";
	cin >> Ordo;
	
	int MatriksA[Ordo][Ordo], MatriksB[Ordo][Ordo], MatriksC[Ordo][Ordo];
	
	//memasukkan nilai-nilai matriks A
	cout << "Memasukkan nilai-nilai matriks A:\n";
	for(i = 0; i < Ordo; i++){
		for(j = 0; j < Ordo; j++){
			cout << "Matriks A[" << i << "][" << j << "]: ";
			cin >> MatriksA[i][j];
		}
	}
	cout << endl;
	
	//menampilkan isi matriks A
	cout << "Matriks A\n";
	for(i = 0; i < Ordo; i++){
		for(j = 0; j < Ordo; j++){
			cout << MatriksA[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	//memasukkan nilai-nilai matriks B
	cout << "Memasukkan nilai-nilai matriks B:\n";
	for(i = 0; i < Ordo; i++){
		for(j = 0; j < Ordo; j++){
			cout << "Matriks B[" << i << "][" << j << "]: ";
			cin >> MatriksB[i][j];
		}
	}
	cout << endl;
	
	//menampilkan isi matriks B
	cout << "Matriks B\n";
	for(i = 0; i < Ordo; i++){
		for(j = 0; j < Ordo; j++){
			cout << MatriksB[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	//menghitung dan menampilkan hasil perkalian
	cout << "Perkalian matriks A dan matriks B:\n";
	for(i = 0; i < Ordo; i++){
		for(j = 0; j < Ordo; j++){
			Hasil = 0;
			for(k = 0; k < Ordo; k++){
				Hasil += MatriksA[i][k] * MatriksB[k][j];					
			}
			cout << Hasil << "\t";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
