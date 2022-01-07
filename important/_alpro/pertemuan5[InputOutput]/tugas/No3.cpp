#include <iostream>
using namespace std;

int main(){
	float Bilangan, JumlahBilangan = 0, BanyakBilangan = 0, RataRata;
	string Tambah = "y";
	
	//	loop while untuk melakukan input bilangan
	while(Tambah == "y"){
	
	//	memasukkan input bilangan
		cout<<"Masukkan bilangan : ";
		cin>>Bilangan;
		
	//	menambahkan bilangan ke jumlah bilangan
		JumlahBilangan += Bilangan, BanyakBilangan++;
		
	//	memasukkan input tambah untuk konfirmasi
		cout<<"Tambahkan bilangan lagi?(y/n) : ";
		cin>>Tambah;
	}
	
	//	menghitung rata-rata
	RataRata = JumlahBilangan / BanyakBilangan;
	
	//	output
	cout<<"Rata-ratanya adalah "<<RataRata<<endl;
	
	system("pause");
	return 0;
}
