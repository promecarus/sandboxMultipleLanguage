#include <iostream>
using namespace std;

int main(){
	int A[5] = {10, 15, 20, 25, 30}, BIL;
	
	for(int i = 0; i < 5; i++){
		cout << "A[" << i << "] = " << A[i] << endl;
	}
	cout << endl;
	
	cout << "Masukkan nilai yang dicari : ";
	cin >> BIL;
	
	//melakukan pencarian
	for(int j = 0; j < 5; j++){
		if(A[j] == BIL){
			cout << "Nilai yang dicari ada pada indeks ke-" << j << endl;
		}
	}
	
	system("pause");
	return 0;
}
