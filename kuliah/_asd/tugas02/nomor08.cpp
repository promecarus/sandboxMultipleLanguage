#include <iostream>
#include <string.h>

using namespace std;

int main() {
	// char *str = "Ini adalah sebuah sample string.";
	// cout << str << "\n";

	// // strchr() mengembalikan karakter pertama dari depan, yang ada di dalam parameter kedua, sampai akhir string
	// // contoh penggunaan strchr()
	// cout << "Hasil strchr(str, 'a')\t\t: " << strchr(str, 'a') << "\n";

	// // strrchr() mengembalikan karakter pertama dari belakang, yang ada di dalam parameter kedua, sampai akhir string
	// // contoh penggunaan strrchr()
	// cout << "Hasil strrchr(str, 'a')\t\t: " << strrchr(str, 'a') << "\n";

	// // strstr() mengembalikan kata pertama dari depan, yang ada di dalam parameter kedua, sampai akhir string
	// // contoh penggunaan strstr()
	// cout << "Hasil strstr(str, \"sample\")\t: " << strstr(str, "sample") << "\n";
	char *contohString = "Lorem ipsum, dolor sit amet consectetur adipisicing elit. Necessitatibus, magnam.";
	cout << "strchr(contohString, 'i'): " << strchr(contohString, 'i') << "\n";
	cout << "strrchr(contohString, 'i'): " << strrchr(contohString, 'i') << "\n";
	cout << "strstr(contohString, \"dolor\"): " << strstr(contohString, "dolor") << "\n";

	return 0;
}
