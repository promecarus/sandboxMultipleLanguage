#include <iostream>
using namespace std;

// prosedur output bilangan prima
void menampilkanBilanganPrima(int n) {
    int i, j;
    for (i = 2; i <= n; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }
        if (j == i)
            cout << i << " ";
    }
}

int main(){
    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;
    
	menampilkanBilanganPrima(batas);
	cout << endl;	
	
	system("pause");
	return 0;
}
