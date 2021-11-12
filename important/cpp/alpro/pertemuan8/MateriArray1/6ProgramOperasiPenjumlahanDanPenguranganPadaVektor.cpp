#include <iostream>
using namespace std;

int U[] = {1, 1, 1, 1}, V[] = {2, 2, 2, 2}, W[4];

int main(){
	for(int i = 0; i < 4; i++){
		W[i] = U[i] + V[i];
		cout << W[i] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}
