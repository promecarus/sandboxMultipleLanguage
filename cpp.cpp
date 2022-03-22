#include <iostream>
#include <string>
#include <string.h>
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
	// char *name[] = {"Ali", "Ani", "Tono"};
	// cout << name[0] << endl; 	
	// name[0] = "Asep";
	// cout << name[0] << endl; 	
	// char name2[][10] = {"Ali", "Ani", "Tono"};
	// name2[0] = "Ali"; 	
	// int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// for(int i = 0; i < 10; i++) {
	// 	cout << arr[i] << " ";
	// }
	// arr[1] = 20;
	// cout << endl;
	// for(int i = 0; i < 10; i++) {
	// 	cout << arr[i] << " ";
	// }
	char str[] = "Hello World";
	char * pch = strchr(str, 'W');
	cout << pch << endl;
	cout << pch-str << endl;

	return 0;
}