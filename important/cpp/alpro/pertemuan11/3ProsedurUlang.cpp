#include <iostream>
using namespace std;

void ULANG(char kar, int jum){
	for(int i = 0; i <= jum; i++){
		cout << kar;
	}
	cout << endl;
}

int main(){
	ULANG('*', 10);
	ULANG('-', 5);
	ULANG('@', 50);
	
	system("pause");
	return 0;
}
