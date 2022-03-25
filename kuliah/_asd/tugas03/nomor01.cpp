#include <iostream>
#include <string.h>


using namespace std;

// Buat program untuk menghitung jumlah nilai akhir mahasiswa structure dengan ketentuan: Nilai akhir = (30% * tugas) + (10% * kuis) + (30% * mid) + (40% * uas)

struct mahasiswa{
    float tugas;
    float kuis;
    float mid;
    float uas;
    float nilaiAkhir;
    char grade;
};

int main(){
    string batasTabelMahasiswa =    "+-------+-------+-------+-----+-----+-------------+-------+";

    // penentuan banyaknya mahasiswa
    int banyakMahasiswa;
    cout << "Tentukan banyaknya mahasiswa: ";
    cin >> banyakMahasiswa;
    mahasiswa mhs[banyakMahasiswa];
    
    // input data mahasiswa
    for (int i = 0; i < banyakMahasiswa; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan nilai tugas\t: ";
        cin >> mhs[i].tugas;
        cout << "Masukkan nilai kuis\t: ";
        cin >> mhs[i].kuis;
        cout << "Masukkan nilai mid\t: ";
        cin >> mhs[i].mid;
        cout << "Masukkan nilai uas\t: ";
        cin >> mhs[i].uas;
        cout << "\n";
        mhs[i].nilaiAkhir = (mhs[i].tugas * 0.3) + (mhs[i].kuis * 0.1) + (mhs[i].mid * 0.3) + (mhs[i].uas * 0.3);
        if (mhs[i].nilaiAkhir > 85) {
            mhs[i].grade = 'A';
        } else if (mhs[i].nilaiAkhir > 70) {
            mhs[i].grade = 'B';
        } else if (mhs[i].nilaiAkhir > 55) {
            mhs[i].grade = 'C';
        } else if (mhs[i].nilaiAkhir > 40) {
            mhs[i].grade = 'D';
        } else {
            mhs[i].grade = 'E';
        }
    }

    // output tabel data mahasiswa 
    cout << batasTabelMahasiswa << endl;
    cout << "| No.   | Tugas | Kuis\t| Mid | UAS | Nilai Akhir | Grade |\n";
    cout << batasTabelMahasiswa << endl;
    for (int i = 0; i < banyakMahasiswa; i++) {
        cout << "| " << i + 1 << "\t| " << mhs[i].tugas << "\t| " << mhs[i].kuis << "\t| " << mhs[i].mid << "  | " << mhs[i].uas << "  | " << mhs[i].nilaiAkhir << "\t  |   " << mhs[i].grade << "   |\n";
        cout << batasTabelMahasiswa << endl;
    }
    cout << "\n\n";

	return 0;
}