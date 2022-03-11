#include <iostream>

using namespace std;

class UnsurKimia2 {
    public:
        // attribute
        double  na;             // nomor atom
        double  ma;             // massa atom
        double  ion;            // ion
        string  sim;            // simbol atom
        string  nuk;            // nama unsur kimia
        int     per;            // periode
        string  gol;            // golongan
        double  td;             // titik didih
        double  tl;             // titik lebur
        string  su;             // sifat umum

        // constructor
        UnsurKimia2(double na, double ma, double ion, string sim, string nuk, int per, string  gol, double td, double tl, string su) {
            UnsurKimia2::na     = na,
            UnsurKimia2::ma     = ma,
            UnsurKimia2::ion    = ion,
            UnsurKimia2::sim    = sim,
            UnsurKimia2::nuk    = nuk,
            UnsurKimia2::per    = per,
            UnsurKimia2::gol    = gol,
            UnsurKimia2::td     = td,
            UnsurKimia2::tl     = tl,
            UnsurKimia2::su     = su;
        }

        // mutator
        void ubahUnsurKimia2(double na, double ma, double ion, string sim, string nuk, int per, string gol, double td, double tl, string su) {
            UnsurKimia2::na     = na,
            UnsurKimia2::ma     = ma,
            UnsurKimia2::ion    = ion,
            UnsurKimia2::sim    = sim,
            UnsurKimia2::nuk    = nuk,
            UnsurKimia2::per    = per,
            UnsurKimia2::gol    = gol,
            UnsurKimia2::td     = td,
            UnsurKimia2::tl     = tl,
            UnsurKimia2::su     = su;
        }

        // accessor
        double getProton() {
            return na;
        }
        double getElektron() {
            return na - ion;
        }
        double getNeutron() {
            return ma - na;
        }
        void cetakInfoUnsurKimia2() {
            cout << "Nomor Atom         : " << na << endl;
            cout << "Massa Atom         : " << ma << endl;
            cout << "Ion                : " << ion << endl;
            cout << "Simbol Atom        : " << sim << endl;
            cout << "Nama Unsur Kimia   : " << nuk << endl;
            cout << "per                : " << per << endl;
            cout << "gol                : " << gol << endl;
            cout << "td Didih           : " << td << endl;
            cout << "Titik Lebur        : " << tl << endl;
            cout << "Sifat Umum         : " << su << endl;
        }
};

int main(){
    UnsurKimia2 hidrogen(1, 1.008, 0, "H", "Hydrogen", 1, "Nonmetal", -259.14, -252.87, "Gas");
    hidrogen.cetakInfoUnsurKimia2();

    system("pause");
	return 0;
}