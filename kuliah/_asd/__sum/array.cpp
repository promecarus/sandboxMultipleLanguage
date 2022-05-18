#include <iostream>

using namespace std;

int main() {
    cout << "Masukkan kapasitas keranjang: ";
    int tempKapasitasKeranjang;
    cin >> tempKapasitasKeranjang;

    const int kapasitasKeranjang = tempKapasitasKeranjang;
    string keranjang[kapasitasKeranjang];

    for (int i = 0; i < kapasitasKeranjang; i++) {
        cout << "Masukkan item ke-" << i + 1 << ":";
        cin >> keranjang[i];
    }

    for (int i = 0; i < kapasitasKeranjang; i++) {
        cout << "Isi ke-" << i + 1 << ": " << keranjang[i] << "\n";
    }
    system("pause");
    return 0;
}