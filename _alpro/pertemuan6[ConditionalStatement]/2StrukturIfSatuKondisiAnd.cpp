#include <iostream>
using namespace std;

int main(){
	int bil;

	cout<<"masukkan sebuah bilangan bulat : ";
	cin>>bil;

	// seleksi satu kondisi
	if ((bil>0) && (bil<10)){
		cout<<"Bilangan "<< bil <<" adalah bilangan positif"<<endl;
		cout<<"Bilangan lebih besar dari 0 dan kurang dari 10"<<endl;
	}
	
	system ("pause");
	return 0;
}
