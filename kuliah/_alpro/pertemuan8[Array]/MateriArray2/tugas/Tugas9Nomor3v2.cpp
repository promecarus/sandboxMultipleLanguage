#include <iostream>
using namespace std;

int main(){
	//array 2 dimensi
	int ArrayNama2Dimensi[8][40] = {
		1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0,
		1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0,
		1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0,
		1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0,
		1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0,
		1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0,
		1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1,
		1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1
	};
	
	//menampilkan hasil array 2 dimensi
	cout << "Menampilkan nama menggunakan array 2 dimensi\n";
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 40; j++){
			if(ArrayNama2Dimensi [i] [j] != 0){
				putchar('\xDB');
			} else{
				cout << ends;
			}
		}
		cout << endl;
	}
	cout << endl << "Menampilkan nama menggunakan array 3 dimensi\n";
	
	//array 3 dimensi
	int ArrayNama3Dimensi[6][8][8] = {
		1, 1, 0, 0, 0, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		1, 1, 1, 1, 1, 1, 1, 0, 
		1, 1, 1, 1, 1, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		
		0, 0, 1, 1, 1, 0, 0, 0, 
		0, 0, 1, 1, 1, 0, 0, 0, 
		0, 1, 1, 0, 1, 1, 0, 0, 
		0, 1, 1, 0, 1, 1, 0, 0, 
		0, 1, 1, 0, 1, 1, 0, 0, 
		1, 1, 1, 1, 1, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		
		1, 1, 0, 0, 0, 0, 0, 0, 
		1, 1, 0, 0, 0, 0, 0, 0, 
		1, 1, 0, 0, 0, 0, 0, 0, 
		1, 1, 0, 0, 0, 0, 0, 0, 
		1, 1, 0, 0, 0, 0, 0, 0, 
		1, 1, 0, 0, 0, 0, 0, 0, 
		1, 1, 0, 0, 0, 0, 0, 0, 
		1, 1, 0, 0, 0, 0, 0, 0,
		
		1, 1, 0, 1, 1, 1, 0, 0, 
		1, 1, 0, 1, 1, 0, 0, 0, 
		1, 1, 1, 1, 0, 0, 0, 0, 
		1, 1, 1, 1, 0, 0, 0, 0, 
		1, 1, 1, 1, 1, 0, 0, 0, 
		1, 1, 0, 1, 1, 0, 0, 0, 
		1, 1, 0, 1, 1, 1, 0, 0, 
		1, 1, 0, 0, 1, 1, 0, 0, 
		
		0, 0, 1, 1, 1, 0, 0, 0, 
		0, 0, 1, 1, 1, 0, 0, 0, 
		0, 1, 1, 0, 1, 1, 0, 0, 
		0, 1, 1, 0, 1, 1, 0, 0, 
		0, 1, 1, 0, 1, 1, 0, 0, 
		1, 1, 1, 1, 1, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		1, 1, 0, 0, 0, 1, 1, 0, 
		
		1, 1, 1, 0, 0, 0, 0, 0, 
		1, 1, 1, 0, 0, 0, 0, 0, 
		1, 1, 1, 0, 0, 0, 0, 0, 
		1, 1, 1, 0, 0, 0, 0, 0, 
		1, 1, 1, 0, 0, 0, 0, 0, 
		1, 1, 1, 0, 0, 0, 0, 0, 
		1, 1, 1, 1, 1, 1, 0, 0, 
		1, 1, 1, 1, 1, 1, 0, 0
		
	};
	
	//menampilkan hasil array 2 dimensi
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 8; j++){
			for(int k = 0; k < 8; k++){
				if(ArrayNama3Dimensi [i][j][k] != 0){
					putchar('\xDB');
				} else{
					cout << ends;
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;
	
	system("pause");
	return 0;
}
