#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>
// #include <array>
// #include <algorithm>

using namespace std;
using namespace chrono;
using namespace this_thread;

void animasiKetikRepeatitif (const char* kata, const char* batas, int repeat, int time) {
	for (int i = 0; i < repeat; i++) {
		for (int j = 0; j < strlen(kata); j++) {
			cout << kata[j];
			sleep_for(milliseconds(time));
		}
		if(batas != "") {
			cout << batas;
			sleep_for(milliseconds(time));
		}
	}
	cout << "\n";
}

int main() {
	animasiKetikRepeatitif("ass", "", 10, 50);
	
	system("pause");
	return 0;
}