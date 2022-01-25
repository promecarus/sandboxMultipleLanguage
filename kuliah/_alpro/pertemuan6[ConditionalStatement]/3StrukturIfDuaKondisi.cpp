#include <iostream>
using namespace std;

int main(){
	int bil;
	
	cout<<"masukkan sebuah bilangan bulat : ";
	cin>>bil;

	// seleksi dua kondisi
	if (bil>=0){
		cout<<"Bilangan "<< bil <<" adalah bilangan positif"<<endl;
	} else {
		cout<<"Bilangan "<< bil <<" adalah bilangan negatif"<<endl;
	}
	
	system ("pause");
	return 0;
}
