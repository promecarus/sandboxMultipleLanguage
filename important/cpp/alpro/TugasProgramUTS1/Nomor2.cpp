#include <iostream>
using namespace std;

int main(){
	int bilangan;
	
	cout << "masukkan bilangan = ";
	cin >> bilangan;
	cout << endl;
	
	for(int i = 0; i < bilangan; i++){
		cout<<"*";
		for (int j = 0; j < i; j++){
			if(j%2==0){
				cout << "#";
			} else{
				cout <<"*";
			}
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
