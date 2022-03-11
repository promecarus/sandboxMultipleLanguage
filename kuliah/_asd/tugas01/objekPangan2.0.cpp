#include <iostream>

using namespace std;

class Pangan2 {
    public:
    // attribute
        string np;  // nama pangan
        string jp;  // jenis pangan
        double jpp; // jumlah protein pangan (gram)
        double jkp; // jumlah karbohidrat pangan (gram)
        double jlp; // jumlah lemak pangan (gram)
    
    // constractor
        Pangan2(string np, string jp, double jpp, double jkp, double jlp) {
            Pangan2::np     = np;
            Pangan2::jp     = jp;
            Pangan2::jpp    = jpp;
            Pangan2::jkp    = jkp;
            Pangan2::jlp    = jlp;
        }
    
    // mutator
        void ubahPangan2(string np, string jp, double jpp, double jkp, double jlp) {
            Pangan2::np     = np;
            Pangan2::jp     = jp;
            Pangan2::jpp    = jpp;
            Pangan2::jkp    = jkp;
            Pangan2::jlp    = jlp;
        }

    // accessor
        double getJumlahProteinPangan() {
            return jpp * 4;
        }
        double getJumlahKarbohidratPangan() {
            return jkp * 4;
        }
        double getJumlahLemakPangan() {
            return jlp * 9;
        }
        double getKaloriTotalPangan() {
            return getJumlahProteinPangan() + getJumlahKarbohidratPangan() + getJumlahLemakPangan();
        }
        void cetakInfoPangan() {
            cout << "Nama Pangan\t\t\t: " << np << endl;
            cout << "Jenis Pangan\t\t\t: " << jp << endl;
            cout << "Jumlah Protein Pangan\t\t: " << jpp << endl;
            cout << "Jumlah Karbohidrat Pangan\t: " << jkp << endl;
            cout << "Jumlah Lemak Pangan\t\t: " << jlp << endl;
            cout << "Jumlah Kalori Pangan\t\t: " << getKaloriTotalPangan() << endl;
        }
};

int main(){
    Pangan2 pisang("Pisang", "Buah", 100, 50, 10);
    pisang.cetakInfoPangan();
    
    system("pause");
	return 0;
}