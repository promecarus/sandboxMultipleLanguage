#include <iostream>
// #include <string.h>
// #include <typeinfo>
// #include <chrono>
// #include <thread>
// #include <array>
// #include <algorithm>
// #include <bits/stdc++.h>

using namespace std;
// using namespace chrono;
// using namespace this_thread;

int main() {
	int a = 5;
	int counter = 0;
	for(int i = 0; i < a; i++){
		// counter++;
		cout << "Counter " << i + 1 << "= " << ++counter << endl;
	}

	system("pause");
	return 0;
}