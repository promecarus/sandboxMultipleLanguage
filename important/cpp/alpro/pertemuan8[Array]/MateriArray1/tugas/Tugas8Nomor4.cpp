#include <iostream>
using namespace std;

int main(){
	int JumlahBarang, HargaTotal = 0;
	
	//menginput banyaknya jumlah barang
	cout << "Berapa barang yang Anda beli? ";
	cin >> JumlahBarang;
	int HargaBarang[JumlahBarang];
	
	//memasukkan harga tiap barang sekaligus mentotalkan dan menyaring antara barang yang diskon dan yang tidak
	for(int i = 0; i < JumlahBarang; i++){
		cout << "Barang ke-" << i + 1 << " = ";
		cin >> HargaBarang[i];
		if(HargaBarang[i] > 20000){
			HargaTotal += HargaBarang[i] * 90 / 100;
		} else{
			HargaTotal += HargaBarang[i];
		}
	}
	
	//menampilkan total harga yang perlu dibayar
	cout << "Total harga yang perlu dibayar setelah dikenakan diskon adalah " <<HargaTotal << endl;
	
	system("pause");
	return 0;
}
