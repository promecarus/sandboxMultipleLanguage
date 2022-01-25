#include <iostream>
using namespace std;

int i, values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
char word[] = {'H', 'e', 'l', 'l', 'o'};

int main(){
	for(i = 0; i < 9; ++i){
		cout << "values " << i << " is " << values[i] << endl;
	}
	cout << endl;
	
	for(i = 0; i < 5; ++i){
		cout << "word " << i << " is " << word[i] << endl;
	}
	
	system("pause");
	return 0;
}
