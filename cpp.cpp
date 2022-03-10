#include <iostream>
#include <array>
#include <algorithm>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;
using namespace this_thread;

void animasiKetik (int i, int time, string batas) {
	cout << i;
	sleep_for(milliseconds(time));
	cout << batas;
	sleep_for(milliseconds(time));
}

int main() {

	array <int, 10> angkaAngka = {9, 4, 6, 2, 0, 7, 3, 1, 5, 8};
	for(int i: angkaAngka) {
		animasiKetik(i, 100, ";");
	}
	cout << "\n";
	sort(angkaAngka.begin(), angkaAngka.end());
	for(int i: angkaAngka) {
		animasiKetik(i, 100, ";");
	}
	cout << "\n";

	return 0;
}