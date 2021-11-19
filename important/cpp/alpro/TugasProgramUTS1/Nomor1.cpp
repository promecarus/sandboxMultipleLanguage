#include <iostream>
using namespace std;

int array[10];

int main(){
	int max, min;
	
	for(int i = 0; i < 10; i++){
		cout << "Angka ke-" << i + 1 << ": ";
		cin >> array[i];
	}
	
	max = array[0];
	min = array[0];
	
	for(int i = 1; i < 10; i++){
		if(array[i] > max){
			max = array[i];
		}
		if(array[i] < min){
			min = array[i];
		}
	}
	
	cout << endl;
	cout << "Nilai maksimal adalah " << max << endl;
	cout << "Nilai minimal adalah " << min << endl;
	
	system("pause");
	return 0;
}
