#include <iostream>

using namespace std;

class Negara2 {
	public:
		// attribute
		string	nn;		// nama negara
		string 	ikn;	// ibu kota negara
		int 	ttn;	// tahun terbentuk negara
		double 	lwn;	// luas wilayah negara (dalam km^2)
		double 	ltpn;	// luas tanah pertanian negara (dalam km^2)
		double 	pn;		// populasi negara
		double 	jpn;	// jumlah petani negara

		// constractor
		Negara2(string nn, string ikn, int ttn, double lwn, double ltpn, double pn, double jpn) {
			Negara2::nn		= nn;
			Negara2::ikn	= ikn;
			Negara2::ttn	= ttn;
			Negara2::lwn 	= lwn;
			Negara2::ltpn 	= ltpn;
			Negara2::pn 	= pn;
			Negara2::jpn 	= jpn;
		}
		
		// mutator
		void ubahNegara2(string nn, string ikn, int ttn, double lwn, double ltpn, double pn, double jpn) {
			Negara2::nn		= nn;
			Negara2::ikn 	= ikn;
			Negara2::ttn	= ttn;
			Negara2::lwn 	= lwn;
			Negara2::ltpn 	= ltpn;
			Negara2::pn 	= pn;
			Negara2::jpn 	= jpn;
		}
		
		// accessor
		int getUmurNegara(int tahunSekarang) {
			return tahunSekarang - ttn;
		}
		double getJumlahKepadatanPendudukKasar() {
			return pn / lwn;
		}
		double getJumlahKepadatanPendudukFisiografis() {
			return pn / ltpn;
		}
		double getKepadatanAgraris() {
			return jpn / ltpn;
		}
		void cetakInfoNegara() {
			cout << "Nama Negara\t\t\t: " << nn << endl;
			cout << "Ibu Kota Negara\t\t\t: " << ikn << endl;
			cout << "Tahun Terbentuk Negara\t\t: " << ttn << endl;
			cout << "Luas Wilayah Negara\t\t: " << lwn << endl;
			cout << "Luas Tanah Pertanian Negara\t: " << ltpn << endl;
			cout << "Populasi Negara\t\t\t: " << pn << endl;
			cout << "Jumlah Petani Negara\t\t: " << jpn << endl;
		}
};

int main(){
	Negara2 Indonesia("Indonesia", "Jakarta", 1945, 460.0, 1.0, 25.0, 0.0);
	Indonesia.cetakInfoNegara();
	system("pause");
	return 0;
}