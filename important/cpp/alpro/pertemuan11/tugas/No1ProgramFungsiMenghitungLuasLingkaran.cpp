#include <iostream>
using namespace std;


double MenghitungLuasLingkaran(double r){
	double LuasLingkaran = r * r * 3.14;
	return LuasLingkaran;
}

int main(){
	double JariJari;
	cout << "Masukkan nilai jari-jari: ";
	cin >> JariJari;
	
	double Hasil = MenghitungLuasLingkaran(JariJari);
	
	cout << "Luas lingkaran adalah " << Hasil << endl;
	
	system("pause");
	return 0;
}
