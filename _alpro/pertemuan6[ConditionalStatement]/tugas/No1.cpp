#include <iostream>
using namespace std;

int main(){
	int Bilangan;
	
	// penerimaan input bilangan dari user
	cout<<"Masukkan bilangan : ";
	cin>>Bilangan;
	
	// output
	cout<<"Bilangan "<<Bilangan<<" adalah ";
	// percabangan untuk menentukan antara ganjil atau genap
	if (Bilangan % 2 == 0){
		cout<<"genap";
	} else {
		cout<<"ganjil";
	}
	
	cout<<endl;
	
	system ("pause");
	return 0;
}
