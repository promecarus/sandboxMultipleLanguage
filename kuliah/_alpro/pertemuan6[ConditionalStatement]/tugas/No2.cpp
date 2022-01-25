#include <iostream>
using namespace std;

int main(){
	int NilaiAngka;
	
	// penerimaan input nilai angka dari user
	cout<<"Masukkan nilai angka : ";
	cin>>NilaiAngka;
	
	// output
	cout<<"Nilai angka "<<NilaiAngka<<" dalam nilai huruf adalah ";
	
	// percabangan if untuk mengelompokkan nilai berdasarkan range yang sudah ditentukan
	if (NilaiAngka < 45){
		cout<<"D";
	} else if (NilaiAngka < 55){
		cout<<"C";
	} else if (NilaiAngka < 65){
		cout<<"C+";
	} else if (NilaiAngka < 75){
		cout<<"B";
	} else if (NilaiAngka < 85){
		cout<<"B+";
	} else {
		cout<<"A";
	}
	
	cout<<endl;
	
	system ("pause");
	return 0;
}
