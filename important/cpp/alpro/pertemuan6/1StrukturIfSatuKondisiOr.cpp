#include <iostream>
using namespace std;

int main(){
	int nilai;

	cout<<"masukkan sebuah bilangan bulat : ";
	cin>>nilai;

	// seleksi satu kondisi
	if ((nilai>0) || (nilai>=1)){
		cout<<"Nilai "<< nilai <<" adalah bilangan positif"<<endl;
	}
	
	system ("pause");
	return 0;
}
