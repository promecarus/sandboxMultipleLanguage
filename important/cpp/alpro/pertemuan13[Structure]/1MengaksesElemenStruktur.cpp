#include <iostream>
using namespace std;

struct MAHASISWA{
    char *NIM;
    char *Nama;
    char *Alamat;
};

MAHASISWA X;

int main(){
    X.NIM = "123456";
    X.Nama = "Abdul Qodir";
    X.Alamat = "Rawa Belong Barat";

    cout << "NIM : " << X.NIM << endl;
    cout << "Nama : " << X.Nama << endl;
    cout << "Alamat : " << X.Alamat << endl;

    system("pause");
	return 0;
}
