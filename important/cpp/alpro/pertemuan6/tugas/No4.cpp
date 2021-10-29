#include <iostream>
using namespace std;

int main(){
	int Detik = 7425, BiayaSatuJamPertama = 2000, BiayaJamSelanjutnya = 1000, BiayaMaksimal = 10000, Jam, Bayar;
	
	// mengubah satuan detik menjadi satuan jam yang bulat
	Jam = Detik / 3600;
	
	// output jam
	cout<<"Anda parkir selama "<<Jam<<" jam."<<endl;
	
	// menghitung biaya yang harus di bayar
	Bayar = BiayaSatuJamPertama + ((Jam - 1) * BiayaJamSelanjutnya);
	
	// permisalan satu kondisi, jika biaya melebihi batas maksimal, maka kita hanya perlu membayar sebesar 10000
	if (Bayar > BiayaMaksimal){
		Bayar = BiayaMaksimal;
	}
	
	// output biaya yang harus dibayat
	cout<<"Jadi, biaya parkir Anda sebesar Rp"<< Bayar << endl;
	
	system ("pause");
	return 0;
}
