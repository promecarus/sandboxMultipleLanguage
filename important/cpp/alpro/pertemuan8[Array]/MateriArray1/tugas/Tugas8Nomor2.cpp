#include <iostream>
using namespace std;

int main(){
	int NIL[5] = {0, 5, 10, 15, 20}, Tambah = 10;
	
	//menampilkan array sebelum diubah
	cout << "Array sebelum diubah:\n";
	for(int i = 0; i < 5; i++){
		cout << "NIL[" << i << "] = " << NIL[i] << endl;
	}
	cout << endl;

	//menampilkan array sesudah diubah	
	cout << "Array sesudah diubah:\n";
	for(int j = 0; j < 5; j++){
		//proses pengubahan isi array
		NIL[j] = NIL[j] + Tambah;
		//proses menampilkan array
		cout << "NIL[" << j << "] = " << NIL[j]<< endl;
		Tambah += 5;
	}
	cout << endl;
	
	system("pause");
	return 0;
}
