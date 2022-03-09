#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	array <int, 5> isi = {1, 2, 3, 4, 5};
	for(int i: isi) {
		cout << i << endl;
	}

	return 0;
}