#include <iostream>
using namespace std;

int main(){
	cout << "Bilangan kuadrat yang kurang dari 100 : \n";
	
	for(int i = 1; i * i < 100; i++){
		cout << "Bilangan ke-" << i << " : " << i * i << endl;
	}
	
	system ("pause");
	return 0;
}
