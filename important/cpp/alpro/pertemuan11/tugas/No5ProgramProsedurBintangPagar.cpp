#include <iostream>
using namespace std;

void TandaBintangPagar(int n){
	char tampil;
	if(n % 2 == 0){
		tampil = '*';
	} else{
		tampil = '#';
	}
	
	for(int i = 1; i <= n; i++){
		cout << tampil;
	}
	cout << endl;
}

int main(){
	int NilaiParameter;
	cout << "Masukkan nilai parameter: ";
	cin >> NilaiParameter;
	
	TandaBintangPagar(NilaiParameter);
	
	system("pause");
	return 0;
}
