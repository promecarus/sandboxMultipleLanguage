#include <iostream>
using namespace std;

int main(){
	int BilanganPertama, BilanganKedua, Hasil;
	
	//	menerima input bilangan pertama
	cout<<"Masukkan bilangan pertama : ";
	cin>>BilanganPertama;
	
	//	menerima input bilangan kedua
	cout<<"Masukkan bilangan kedua : ";
	cin>>BilanganKedua;
	
	//	menghitung hasil
	Hasil = BilanganPertama + BilanganKedua;
	// output
	cout<<"Hasil penjumlahan dari "<<BilanganPertama<<" dan "<<BilanganKedua;
	cout<<" adalah "<<Hasil<<endl;
	
	system("pause");
	return 0;
}
