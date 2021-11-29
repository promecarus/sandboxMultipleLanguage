#include <iostream>
using namespace std;

void MenampilkanNamaDanAlamatEmail(){
	cout << "Nama\t: Muhammad Haikal Al Rasyid\n";
	cout << "Email\t: haikalslipi@gmail.com\n";
}

int main(){
	char Jawaban;
	cout << "Apakah anda ingin menampilkan nama dan alamat email anda?(y/n)\n";
	cin >> Jawaban;
	
	if(Jawaban == 'y'){
		MenampilkanNamaDanAlamatEmail();
	} else{
		cout << "Keluar dari program.\n";
	}
	
	system("pause");
	return 0;
}
