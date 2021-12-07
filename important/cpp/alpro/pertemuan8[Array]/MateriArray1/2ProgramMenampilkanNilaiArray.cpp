#include <iostream>
using namespace std;

int main(){
	int A[5];
	cout << "Mengisi nilai array A" << endl;
	for(int C = 0; C < 5; C++){
		cout << "A[" << C << "] = ";
		cin >> A[C];
	}
	cout << endl;
	
	cout << "Menampilkan nilai array A" << endl;
	for(int J = 0; J < 5; J++){
		cout << "Nilai array A elemen ke-" << J + 1 << " = " << A[J] << endl;
	}
	
	system("pause");
	return 0;
}
