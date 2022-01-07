#include <iostream>
using namespace std;

int main(){
	int c;

	cout<<"masukkan angka antara 1 - 5 : ";
	cin>>c;

	switch(c){ 
		case 1: 
			cout<<"Sangat Kurang";
			break;
		case 2:
			cout<<"Kurang";
			break;
		case 3:
			cout<<"Cukup";
			break;
		case 4:
			cout<<"Baik";
			break;
		case 5:
			cout<<"Sangat Baik";
			break;
		default: cout<<"Nilai yang anda masukkan salah";
}

	cout<<endl;
	
	system ("pause");
	return 0;
}
