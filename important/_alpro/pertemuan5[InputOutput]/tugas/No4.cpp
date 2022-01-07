#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	//	memasukkan input nilai A
	cout<<"Masukkan nilai A : ";
	cin>>A;

	//	memasukkan input nilai B
	cout<<"Masukkan nilai B : ";
	cin>>B;

	//	proses pertukaran nilai
	C = A, A = B, B = C;

	//	output
	cout<<"Sekarang nilai A adalah "<<A;
	cout<<" dan nilai B adalah "<<B<<endl;
	
	system("pause");
	return 0;
}
