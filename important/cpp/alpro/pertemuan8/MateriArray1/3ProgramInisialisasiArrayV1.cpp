#include <iostream>
using namespace std;

int main(){
	//deklarasi sekaligus inisialisasi array
	int A[5] = {10, 20, 30, 40, 50};
	
	cout << "Menampilkan nilai array A" << endl;
	for(int J = 0; J < 5; J++){
		cout << "Nilai array A elemen ke-" << J + 1 << " = " << A[J] << endl;
	}
	
	system("pause");
	return 0;
}
