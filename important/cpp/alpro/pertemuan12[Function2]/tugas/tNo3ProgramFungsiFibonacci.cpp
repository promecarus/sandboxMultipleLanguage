#include<iostream>
using namespace std;

int fibo(int first, int second, int range){
	cout << first << "\t";
	if(range>=2){
    	return fibo(second, first+second, range-1);
  	} else{
    	return second;
  	} 
}

int main(){
	int rentang, awal, kedua;
  	cout << "awal: ";
  	cin >> awal;

	cout << "kedua: ";
	cin >> kedua;
	  
	cout << "rentang: ";
	cin >> rentang;
	
	cout << fibo(awal, kedua, rentang - 1) << endl;
	
	system("pause");
	return 0;
}
