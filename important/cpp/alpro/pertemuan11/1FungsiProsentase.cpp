#include <iostream>
using namespace std;

double x, y, z;
double Prosentase(double A, double B){
	double C = (A / B) * 100;
	return C;
}

int main(){
	x = 5;
	y = 10;
	z = Prosentase(x, y);
	cout << z << '%' << endl;
	cout << Prosentase(2, 10) << "%" << endl;
	Prosentase(3, 10);
	
	system("pause");
	return 0;
}
