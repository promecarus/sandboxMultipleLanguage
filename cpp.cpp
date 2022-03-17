#include <iostream>
#include <string>
// #include <typeinfo>
// #include <chrono>
// #include <thread>
// #include <array>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;
// using namespace chrono;
// using namespace this_thread;

int main() {
	// int n[10], total = 0;
	// for (int i = 0; i < 10; i++) {
	// 	cout << "Masukkan angka untuk n["<< i <<"]: ";
	// 	cin >> n[i];
	// }
	// int max = n[0], min = n[0];
	// for(int i = 1; i < 10; i++) {
	// 	if (n[i] > max) {
	// 		max = n[i];
	// 	}
	// 	if (n[i] < min) {
	// 		min = n[i];
	// 	}
	// 	total += n[i];
	// }
	// cout << "\n";
	// cout << "Nilai terbesar adalah " << max << endl;
	// cout << "Nilai terkecil adalah " << min << endl;
	// cout << "Nilai rata-rata adalah " << total/10 << endl;

	// string kata;
	// cout << "Masukkan kata: ";
	// cin >> kata;
	// reverse(kata.begin(), kata.end());
	// cout << kata;
	int A[3][4] = {1, 3, 2, 4, 5, 7, 6, 8, 9, 11, 12};
	int B[3][4] = {{1, 2}, {3, 4, 5}, {7}};

	cout << "A[1][1] = " << A[1][1] << endl;
	cout << "B[2][2] = " << B[2][2] << endl;
	cout << "A[2][3] = " << A[2][3] << endl;
	cout << "B[0][1] = " << B[0][1] << endl;
	cout << "A[0][2] = " << A[0][2] << endl;
	
	return 0;
}