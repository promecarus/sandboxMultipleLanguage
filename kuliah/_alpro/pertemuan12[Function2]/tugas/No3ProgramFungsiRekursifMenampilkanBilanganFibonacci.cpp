#include <iostream>
using namespace std;
 
// fungsi deret fibonacci
int fibonacci(int f1, int f2, int fn){
    cout << f1 << " ";
    if(fn >= 2){
        return fibonacci(f2, f1 + f2, fn-1);
    } else{
    	return f2;
    }
}

int main(){
    int awal, kedua, deret, hasil;
    cout << "Masukkan nilai awal\t: ";
    cin >> awal;

    cout << "Masukkan nilai kedua\t: ";
    cin >> kedua;

    cout << "Masukkan batas deret\t: ";
    cin >> deret;
	
	hasil = fibonacci(awal, kedua, deret - 1);
    cout << hasil;
	cout << endl;

	system("pause");
	return 0;
}
