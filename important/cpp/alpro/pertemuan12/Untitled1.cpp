#include <iostream>
using namespace std;

int pangkat2(int x){
	int y = x * x;
	return y;
}

int main(){
	int Bilangan, Hasil;
	
	cout << "Masukkan bilangan: ";
	cin >> Bilangan;
	
	Hasil = pangkat2(Bilangan);
	cout << "Pangkat dua dari " << Bilangan << ""
	
	system("pause");
	return 0;
}
