#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char nama1[50] = "muhammad haikal";
	char nama2[50] = "al rasyid";
	
	cout << "Jumlah karakter dari nama (muhammad haikal) adalah: " << strlen(nama1) << endl;
	cout << "Jumlah karakter dari nama (al rasyid) adalah: " << strlen(nama2) << endl;
	
	system("pause");
	return 0;
}
