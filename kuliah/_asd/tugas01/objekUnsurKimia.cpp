#include <iostream>

using namespace std;

// attribute
typedef struct {
    double  na;  // nomor atom
    double  ma;  // massa atom
    double  ion; // ion
    string  sim; // simbol atom
    string  nuk; // nama unsur kimia
    int     per; // periode
    string  gol; // golongan
    double  td;  // titik didih
    double  tl;  // titik lebur
    string  su;  // sifat umum
} UnsurKimia;

// constractor
UnsurKimia initUnsurKimia(double na, double ma, double ion, string sim, string nuk, int per, string gol, double td, double tl, string su) {
    UnsurKimia uk;
    uk.na   = na;
    uk.ma   = ma;
    uk.ion  = ion;
    uk.sim  = sim;
    uk.nuk  = nuk;
    uk.per  = per;
    uk.gol  = gol;
    uk.td   = td;
    uk.tl   = tl;
    uk.su   = su;
    return uk;
}

// mutator
void ubahUnsurKimia(UnsurKimia *uk, double na, double ma, double ion, string sim, string nuk, int per, string gol, double td, double tl, string su) {
    (*uk).na   = na;
    (*uk).ma   = ma;
    (*uk).ion  = ion;
    (*uk).sim  = sim;
    (*uk).nuk  = nuk;
    (*uk).per  = per;
    (*uk).gol  = gol;
    (*uk).td   = td;
    (*uk).tl   = tl;
    (*uk).su   = su;
}

// accessor
double getProton(UnsurKimia uk) {
    return uk.na;
}

double getElektron(UnsurKimia uk) {
    return uk.na - uk.ion;
}

double getNeutron(UnsurKimia uk) {
    return uk.ma - uk.na;
}

void cetakInfoUnsurKimia(UnsurKimia uk) {
    cout << "Nama Unsur Kimia:      " << uk.nuk << endl;
    cout << "Simbol Unsur Kimia:    " << uk.sim << endl;
    cout << "Nomor Atom:            " << uk.na << endl;
    cout << "Massa Atom:            " << uk.ma << endl;
    cout << "Proton:                " << getProton(uk) << endl;
    cout << "Elektron:              " << getElektron(uk) << endl;
    cout << "Neutron:               " << getNeutron(uk) << endl;
    cout << "Periode:               " << uk.per << endl;
    cout << "Golongan:              " << uk.gol << endl;
    cout << "Titik Didih:           " << uk.td << endl;
    cout << "Titik Lebur:           " << uk.tl << endl;
    cout << "Sifat Umum:            " << uk.su << endl;
}

int main(){

    system("pause");
	return 0;
}