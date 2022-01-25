#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	cout << "Nama: Muhammad Haikal Al Rasyid";
	char nama[] = "Muhammad Haikal Al Rasyid";
	char dicari = 'H';
	char*hasil;
	cout << endl;
	hasil = strchr(nama, dicari);
	cout << endl;
	cout << hasil << " dimulai dari huruf = " << dicari << endl;
	
	system("pause");
	return 0;
}
