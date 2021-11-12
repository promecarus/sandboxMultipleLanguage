#include <iostream>
using namespace std;

int main(){
	int A[5];			//deklarasi array A
	
	for(int C = 0; C < 5; C++){
		cout << "A[" << C << "] = ";
		cin >> A[C];	//memasukkan nilai ke array A
	}
	
	system("pause");
	return 0;
}
