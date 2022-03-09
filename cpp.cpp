#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	array <int, 10> angkaAngka = {9, 4, 6, 2, 0, 7, 3, 1, 5, 8};
	for(int i: angkaAngka) {
		cout << i << " ";
	}
	cout << "\n";
	sort(angkaAngka.begin(), angkaAngka.end());
	for(int i: angkaAngka) {
		cout << i << " ";
	}
	cout << "\n";

	return 0;
}