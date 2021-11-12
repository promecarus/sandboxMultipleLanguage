#include <iostream>
using namespace std;

int main(){
	int X[10];
	
	//memasukkan nilai array
	cout << "Tahap memasukkan nilai ke array.\n";
	for(int i = 0; i < 10; i++){
		cout << "X[" << i << "] = ";
		cin >> X[i];
	}
	cout << endl;
	
	//menampilkan nilai array
	cout << "Tahap menampilkan array.\n";
	for(int j = 0; j < 10; j++){
		cout << "X[" << j << "] = " << X[j] << endl;
	}
	
	system("pause");
	return 0;
}
