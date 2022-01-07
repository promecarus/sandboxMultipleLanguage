#include <iostream>
using namespace std;

struct MAHASISWA{
    char* NIM;
    char* Nama;
    char* Alamat;
};

MAHASISWA X;

int main(){
    X.NIM = "2107411025";
    X.Nama = "Muhammad Haikal Al Rasyid";
    X.Alamat = "Jl. E1 No. 14";

    cout << "NIM\t: " << X.NIM << endl;
    cout << "Nama\t: " << X.Nama << endl;
    cout << "Alamat\t: " << X.Alamat << endl;

    system("pause");
	return 0;
}
