#include <iostream>

using namespace std;

int main() {
	// Penentuan kapasitas array
	double bilangan[10];

	// Proses input data ke array
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan bilangan ke-" << i + 1 << "\t: ";
        cin >> bilangan[i];
    }

	// Proses pencarian bilangan terbesar, terkecil, dan total
    double bilanganTerbesar = bilangan[0], bilanganTerkecil = bilangan[0], total;
    for (int i = 0; i < 10; i++) {
        if (bilangan[i] > bilanganTerbesar) {
            bilanganTerbesar = bilangan[i];
        }
        if (bilangan[i] < bilanganTerkecil) {
            bilanganTerkecil = bilangan[i];
        }
        total += bilangan[i];
    }

	// Proses output
    cout << "\nBilangan terbesar adalah " << bilanganTerbesar << "\n";
    cout << "Bilangan terkecil adalah " << bilanganTerkecil << "\n";
    cout << "Rata-rata semua bilangan adalah " << total / 10 << "\n\n";
    
	system("pause");
	return 0;
}