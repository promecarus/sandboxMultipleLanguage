#include <iostream>
using namespace std;

int pangkat2(int x){
	int y = x * x;
	return y;
}

int main(){
	int Bilangan, Hasil;
	
	cout << "Masukkan bilangan\t: ";
	cin >> Bilangan;
	
	Hasil = pangkat2(Bilangan);
	cout << "Pangkat dua dari " << Bilangan << "\t: " << Hasil << endl;
	
	system("pause");
	return 0;
}
