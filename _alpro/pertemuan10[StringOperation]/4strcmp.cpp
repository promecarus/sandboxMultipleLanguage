#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char angka1[10];
	char angka2[10];
	
	cout << "angka pertama: ";
	cin >> angka1;
	cout << "angka kedua: ";
	cin >> angka2;
	
	int hasil = strcmp(angka1, angka2);
	
	if(hasil == 0){
		cout << "angka " << angka1 << "sama dengan angka " << angka2;
	} else if(hasil < 0){
		cout << angka1 << " lebih kecil dari angka " << angka2;
	} else{
		cout << angka1 << " lebih besar dari angka " << angka2;
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}
