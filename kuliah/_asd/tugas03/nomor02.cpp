#include <iostream>
#include <string.h>


using namespace std;

// Buat sebuah program untuk menghitung gaji pegawai perminggu, bila diketahui ketentuan sebagai berikut: Gaji per jam = 6000, bila jumlah jam kerja perminggu lebih dari 40 jam, maka kelebihannya dihitung lembur yang besarnya 3x gaji per jam. Input: jumlah jam kerja dan Output : gaji harian pegawai

struct karyawan{
    int gajiPerjam = 6000;
    int batasJumlahJamKerjaPerminggu = 40;
    int jumlahJamKerja;
    int jamLembur;
    int gajiHarian;
};

int main(){
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
        } else {
            kryn[i].jamLembur = 0;
        }
        kryn[i].gajiHarian = (((kryn[i].jumlahJamKerja - kryn[i].jamLembur) * kryn[i].gajiPerjam) + (kryn[i].jamLembur * kryn[i].gajiPerjam * 3)) / 7;
    }

    // output tabel data karyawan
    cout << batasTabelKaryawan << endl;
    cout << "| No.   | Jam Kerja | Lembur | Gaji Harian |\n";
    cout << batasTabelKaryawan << endl;
    for (int i = 0; i < banyakKaryawan; i++) {
        cout << "| " << i + 1 << "\t| " << kryn[i].jumlahJamKerja << "\t    | " << kryn[i].jamLembur << "      | " << kryn[i].gajiPerjam << "\t   |\n";
        cout << batasTabelKaryawan << endl;
    }
    cout << "\n\n";

	return 0;
}