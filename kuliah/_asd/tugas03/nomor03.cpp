#include <iostream>
#include <string.h>


using namespace std;

// Modifikasi program pada soal no. 1 dan 2 dengan mengguanakan struct of array. Tentukan sendiri jumlah elemen data yang akan diinputkan. dan buat output dalam bentuk tabel.

struct mahasiswa{
    float tugas;
    float kuis;
    float mid;
    float uas;
    float nilaiAkhir;
    char grade;
};

struct karyawan{
    int gajiPerjam = 6000;
    int batasJumlahJamKerjaPerminggu = 40;
    int jumlahJamKerja;
    int jamLembur;
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
        if (mhs[i].nilaiAkhir >= 80) {
            mhs[i].grade = 'A';
        } else if (mhs[i].nilaiAkhir >= 70) {
            mhs[i].grade = 'B';
        } else if (mhs[i].nilaiAkhir >= 60) {
            mhs[i].grade = 'C';
        } else if (mhs[i].nilaiAkhir >= 50) {
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

    string batasTabelKaryawan = "+-------+-----------+--------+-------------+";

    // penentuan banyaknya karyawan
    int banyakKaryawan;
    cout << "Tentukan banyaknya karyawan: ";
    cin >> banyakKaryawan;
    karyawan kryn[banyakKaryawan];

    // input data karyawan
    for (int i = 0; i < banyakKaryawan; i++) {
        cout << "Karyawan ke-" << i + 1 << endl;
        cout << "Masukkan jumlah jam kerja: ";
        cin >> kryn[i].jumlahJamKerja;
        if(kryn[i].jumlahJamKerja > kryn[i].batasJumlahJamKerjaPerminggu){
            kryn[i].jamLembur = kryn[i].jumlahJamKerja - kryn[i].batasJumlahJamKerjaPerminggu;
            kryn[i].gajiPerjam = kryn[i].gajiPerjam * 3;
        } else {
            kryn[i].jamLembur = 0;
        }
    }

    // output tabel data karyawan
    cout << batasTabelKaryawan << endl;
    cout << "| No.   | Jam Kerja | Lembur | Gaji Harian |\n";
    cout << batasTabelKaryawan << endl;
    for (int i = 0; i < banyakKaryawan; i++) {
        cout << "| " << i + 1 << "\t| " << kryn[i].jumlahJamKerja << "\t    | " << kryn[i].jamLembur << "     | " << kryn[i].gajiPerjam << "\t   |\n";
        cout << batasTabelKaryawan << endl;
    }
    cout << "\n\n";

	return 0;
}