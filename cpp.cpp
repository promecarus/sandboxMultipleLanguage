#include <iostream>
#include <string>
#include <typeinfo>
// #include <chrono>
// #include <thread>
// #include <array>
// #include <algorithm>

using namespace std;
// using namespace chrono;
// using namespace this_thread;

int print(int input) {
	cout << input << "\n";
}

string print(string input) {
	cout << input << "\n";
}

double print(double input) {
	cout << input << "\n";
}

class UnsurKimia {
	public:
		double 	nomorAtom;
		double 	massaAtom;
		double 	ionAtom;
		string 	simbolAtom;
		string 	namaAtom;
		string 	keteranganAtom;
		int		periodeAtom;
		int		golonganAtom;
		double  titikDidihAtom;
		double  titikLeburAtom;

		UnsurKimia(double nomorAtom, double massaAtom, double ionAtom, string simbolAtom, string namaAtom, string keteranganAtom, int periodeAtom, int golonganAtom, double titikDidihAtom, double titikLeburAtom) {
			this->nomorAtom 		= nomorAtom;
			this->massaAtom 		= massaAtom;
			this->ionAtom 			= ionAtom;
			this->simbolAtom 		= simbolAtom;
			this->namaAtom 			= namaAtom;
			this->keteranganAtom	= keteranganAtom;
			this->periodeAtom 		= periodeAtom;
			this->golonganAtom 		= golonganAtom;
			this->titikDidihAtom 	= titikDidihAtom;
			this->titikLeburAtom 	= titikLeburAtom;
		}

		void editNomorAtom(double nomorAtom) {
			this->nomorAtom = nomorAtom;
		}

		void editMassaAtom(double massaAtom) {
			this->massaAtom = massaAtom;
		}

		void editIonAtom(double ionAtom) {
			this->ionAtom = ionAtom;
		}

		void editSimbolAtom(string simbolAtom) {
			this->simbolAtom = simbolAtom;
		}

		void editNamaAtom(string namaAtom) {
			this->namaAtom = namaAtom;
		}

		void editKeteranganAtom(string keteranganAtom) {
			this->keteranganAtom = keteranganAtom;
		}

		void editPeriodeAtom(int periodeAtom) {
			this->periodeAtom = periodeAtom;
		}

		void editGolonganAtom(int golonganAtom) {
			this->golonganAtom = golonganAtom;
		}

		void editTitikDidihAtom(double titikDidihAtom) {
			this->titikDidihAtom = titikDidihAtom;
		}

		void editTitikLeburAtom(double titikLeburAtom) {
			this->titikLeburAtom = titikLeburAtom;
		}

		double getProton() {
			return nomorAtom;
		}

		double getElektron() {
			return nomorAtom - ionAtom;
		}

		double getNeutron() {
			return massaAtom - nomorAtom;
		}

		string printAtom() {
			return 	"Nomor Atom		: " + to_string(nomorAtom) + "\n" +
					"Massa Atom		: " + to_string(massaAtom) + "\n" +
					"Ion Atom		: " + to_string(ionAtom) + "\n" +
					"Simbol Atom		: " + simbolAtom + "\n" +
					"Nama Atom		: " + namaAtom + "\n" +
					"Keterangan Atom		: " + keteranganAtom + "\n" +
					"Periode Atom		: " + to_string(periodeAtom) + "\n" +
					"Golongan Atom		: " + to_string(golonganAtom) + "\n" +
					"Titik Didih Atom	: " + to_string(titikDidihAtom) + "\n" +
					"Titik Lebur Atom	: " + to_string(titikLeburAtom) + "\n";
		}
};


int main() {
	UnsurKimia atom1(1, 1.0079, 1, "H", "Hydrogen", "Gas", 1, 1, 14.01, 20.28);
	print("hello world");
	print(atom1.getProton());
	print(atom1.getElektron());
	print(atom1.getNeutron());
	print(atom1.printAtom());
	system("pause");
	return 0;
}