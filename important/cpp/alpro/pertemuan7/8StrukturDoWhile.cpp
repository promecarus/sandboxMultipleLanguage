#include <iostream>
using namespace std;
int c;

int main(){
	c = 0;
	
	do{
		cout << "Hello world!" << endl;
		c++; // increment
	} while(c < 10);
	
	system("pause");
	return 0;
}
