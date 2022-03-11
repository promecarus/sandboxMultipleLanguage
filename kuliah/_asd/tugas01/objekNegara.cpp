#include <iostream>

using namespace std;

// attribute
typedef struct {
	string	nn;		// nama negara
	string 	ikn;	// ibu kota negara
	int 	ttn;	// tahun terbentuk negara
	double 	lwn;	// luas wilayah negara (dalam km^2)
	double 	ltpn;	// luas tanah pertanian negara (dalam km^2)
	double 	pn;		// populasi negara
	double 	jpn;	// jumlah petani negara
} Negara;

// constractor
Negara initNegara(string nn, string ikn, int ttn, double lwn, double ltpn, double pn, double jpn) {
Negara n;
	n.nn	= nn;
	n.ikn	= ikn;
	n.ttn	= ttn;
	n.lwn 	= lwn;
	n.ltpn 	= ltpn;
	n.pn 	= pn;
	n.jpn 	= jpn;
	return n;
}

// mutator
void ubahNegara(Negara *n, string nn, string ikn, int ttn, double lwn, double ltpn, double pn, double jpn) {
	(*n).nn		= nn;
	(*n).ikn 	= ikn;
	(*n).ttn	= ttn;
	(*n).lwn 	= lwn;
	(*n).ltpn 	= ltpn;
	(*n).pn 	= pn;
	(*n).jpn 	= jpn;
}

// accessor
int getUmurNegara(Negara n, int tahunSekarang) {
	return tahunSekarang - n.ttn;
}
double getJumlahKepadatanPendudukKasar(Negara n) {
	return n.pn / n.lwn;
}
double getJumlahKepadatanPendudukFisiografis(Negara n) {
	return n.pn / n.ltpn;
}
double getJumlahKepadatanAgraris(Negara n) {
	return n.jpn / n.ltpn;
}
void cetakInfoNegara(Negara n) {
	cout << "Nama negara:							" << n.nn << endl;
	cout << "Ibu kota negara:						" << n.ikn << endl;
	cout << "Tahun terbentuk negara:				" << n.ttn << endl;
	cout << "Luas wilayah negara:					" << n.lwn << endl;
	cout << "Luas tanah pertanian negara:			" << n.ltpn << endl;
	cout << "Populasi negara:						" << n.pn << endl;
	cout << "Jumlah petani negara:					" << n.jpn << endl;
	cout << "Jumlah kepadatan penduduk kasar:		" << getJumlahKepadatanPendudukKasar(n) << endl;
	cout << "Jumlah kepadatan penduduk fisiografis:	" << getJumlahKepadatanPendudukFisiografis(n) << endl;
	cout << "Jumlah kepadatan agraris:				" << getJumlahKepadatanAgraris(n) << endl;
}

int main(){

	system("pause");
	return 0;
}