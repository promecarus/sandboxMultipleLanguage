#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
	cout << "Fungsi-fungsi C++" << endl;
	cout << "Masukkan kata untuk di uji: ";
	getch();
	char kata[100];
	char kata2[100];
	gets(kata);
	cout << "Panjang karakter\t: " << strlen(kata) << " Karakter" << endl;
	strcpy(kata2, kata);
	cout << "Kata yang disalin\t: " << kata2 << endl;
	strupr(kata);
	cout << "Huruf Besar semua\t: " << kata << endl;
	strlwr(kata);
	cout << "Huruf Kecil semua\t: " << kata << endl;
	strrev(kata);
	cout << "Huruf jadi terbalik\t: " << kata << endl;
	
	system("pause");
	return 0;
}
