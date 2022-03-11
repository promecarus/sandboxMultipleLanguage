#include <iostream>

using namespace std;

// attribute
typedef struct {
    string np;  // nama pangan
    string jp;  // jenis pangan
    double jpp;  // jumlah protein pangan (gram)
    double jkp;  // jumlah karbohidrat pangan (gram)
    double jlp;  // jumlah lemak pangan (gram)
} Pangan;

// constractor
Pangan initPangan(string np, string jp, double jpp, double jkp, double jlp) {
    Pangan p;
    p.np    = np;
    p.jp    = jp;
    p.jpp   = jpp;
    p.jkp   = jkp;
    p.jlp   = jlp;
    return p;
}

// mutator
void ubahPangan(Pangan *p, string np, string jp, double jpp, double jkp, double jlp) {
    (*p).np     = np;
    (*p).jp     = jp;
    (*p).jpp    = jpp;
    (*p).jkp    = jkp;
    (*p).jlp    = jlp;
}

// accessor
double getKaloriProteinPangan(Pangan p) {
    return p.jpp * 4;
}

double getKaloriKarbohidratPangan(Pangan p) {
    return p.jkp * 4;
}

double getKaloriLemakPangan(Pangan p) {
    return p.jlp * 9;
}

double getKaloriTotalPangan(Pangan p) {
    return  getKaloriProteinPangan(p) +
            getKaloriKarbohidratPangan(p) +
            getKaloriLemakPangan(p);
}

void cetakInfoPangan(Pangan p) {
    cout << "Nama Pangan: " << p.np << endl;
    cout << "Jenis Pangan: " << p.jp << endl;
    cout << "Jumlah Protein Pangan: " << p.jpp << endl;
    cout << "Jumlah Karbohidrat Pangan: " << p.jkp << endl;
    cout << "Jumlah Lemak Pangan: " << p.jlp << endl;
    cout << "Jumlah Kalori Protein Pangan: " << getKaloriProteinPangan(p) << endl;
    cout << "Jumlah Kalori Karbohidrat Pangan: " << getKaloriKarbohidratPangan(p) << endl;
    cout << "Jumlah Kalori Lemak Pangan: " << getKaloriLemakPangan(p) << endl;
    cout << "Jumlah Kalori Total Pangan: " << getKaloriTotalPangan(p) << endl;
}

int main(){

    system("pause");
	return 0;
}