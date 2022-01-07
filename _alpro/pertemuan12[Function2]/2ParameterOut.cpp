#include <iostream>
using namespace std;

int Nill = 5, Nil2 = 8, Hasil;

void Jumlah(int A, int B, int *C){
	*C = A + B;
}

int main(){
	Jumlah(Nill, Nil2, &Hasil);
	cout << Hasil << endl;
	
	system("pause");
	return 0;
}
