#include <iostream>
using namespace std;

void increment(int *X){
	*X = *X + 1;
}

int main(){
	int I = 4;
	increment(&I);
	cout << I << endl;
	
	system("pause");
	return 0;
}
