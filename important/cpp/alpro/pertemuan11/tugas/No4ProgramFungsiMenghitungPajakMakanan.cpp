#include <iostream>
using namespace std;

double MenghitungPajakMakanan(double h){
	double Pajak = h * 0.1;
	return Pajak;
}

int main(){
	double Harga;
	cout << "Harga makanan:\t";
	cin >> Harga;
	
	double Hasil = MenghitungPajakMakanan(Harga);
	
	cout << "Pajak sebesar:\t" << Hasil << endl;
	
	system("pause");
	return 0;
}
