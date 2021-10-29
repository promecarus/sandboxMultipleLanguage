#include <iostream>
using namespace std;

int main(){
	int bil;

	cout<<"masukkan sebuah bilangan bulat : ";
	cin>>bil;
	
	// seleksi tiga kondisi
	if (bil>0)
		{ cout<<"Bilangan "<< bil <<" adalah bilangan positif"<<endl; }
	else
		if (bil<0)
			{ cout<<"Bilangan "<< bil <<" adalah bilangan negatif"<<endl; }
		else
			{ cout<<"Bilangan "<< bil <<" adalah bilangan NOL"<<endl; }
	
	system ("pause");
	return 0;
}
