#include <iostream>
using namespace std;

void IsiArray(int A[], int N){
	for(int i = 0; i < N; i++){
		cout << "Masukkan elemen ke-" << i + 1 << ": ";
		cin >> A[i];
	}
}

int main(){
	int Nilai[100], size;
	cout << "Masukkan banyak elemen = ";
	cin >> size;
	IsiArray(Nilai, size);
	
	system("pause");
	return 0;
}
