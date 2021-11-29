#include <iostream>
using namespace std;

double MenghitungLuasKubus(double r){
	double LuasKubus = 6 * r * r;
	return LuasKubus;
}

int main(){
	double Rusuk;
	cout << "Masukkan nilai rusuk: ";
	cin >> Rusuk;
	
	double Hasil = MenghitungLuasKubus(Rusuk);
	
	cout << "Luas kubus adalah " << Hasil << endl;
	
	system("pause");
	return 0;
}
