#include <iostream>
using namespace std;

int main(){
	int Nilai;
	
	//	memasukkan input nilai
	cout<<"Masukkan nilai : ";
	cin>>Nilai;
	
	//	if statement
	if(Nilai>=60){
		
	//	output jika nilai lebih besar sama dengan 60
		cout<<"Lulus"<<endl;
	} else {
		
	//	output jika nilai kurang dari 60
		cout<<"Belum Lulus"<<endl;
	}
	system("pause");
	return 0;
}
