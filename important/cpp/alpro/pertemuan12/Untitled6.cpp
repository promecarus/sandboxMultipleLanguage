#include <iostream>
using namespace std;

int FungsiFaktorial(int n){
	if(n==0)
		return 1;
	else
		return (n * FungsiFaktorial(n - 1));
}

int main(){
	int angka;
	cout << "Masukkan angka: ";
	cin >> angka;
	
	int Hasil = FungsiFaktorial(angka);
	
	cout << Hasil << endl;
	
	system("pause");
	return 0;
}
