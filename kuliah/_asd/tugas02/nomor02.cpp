#include <iostream>

using namespace std;

int main() {
    // Proses penginputan kata
    string kata;
    cout << "\nMasukkan kata\t: ";
    cin >> kata;

    // Proses pengambilan panjang kata
    int panjang = kata.length();

    // Proses output sekaligus pembalikan kata
    cout << "Kata terbalik\t: ";
    for (int i = 0; i < panjang; i++) {
        cout << kata[panjang - i - 1];
    }
    cout << "\n\n";

	system("pause");
	return 0;
}