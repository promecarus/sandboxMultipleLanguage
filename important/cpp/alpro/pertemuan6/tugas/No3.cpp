#include <iostream>
using namespace std;

int main(){
	int JAM = 1, MENIT = 5, DETIK = 10, D;
	
	// proses mengubah dan menambahkan jam, menit, detik ke dalam satuan detik
	D = ((JAM * 3600) + (MENIT * 60) + DETIK);
	
	// output
	cout<<"Lama waktu bekerja dari "<< JAM <<" jam, "<<MENIT<<" menit dan "<<DETIK<<" detik adalah "<<D<<" detik."<<endl;
	
	system ("pause");
	return 0;
}
