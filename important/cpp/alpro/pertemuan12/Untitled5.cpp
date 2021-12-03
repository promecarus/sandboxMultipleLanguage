#include <iostream>
using namespace std;

int a, b, c, d;

void operasi(int x){
	cout << x << endl;
}

int operasi(int x, int y){
	return (x * y);
}

int main(){
	a = 5, b = 5, c = 5;
	operasi(a);
	d = operasi(b, c);
	cout << d << endl;
	
	system("pause");
	return 0;
}
