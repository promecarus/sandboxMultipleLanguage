#include <iostream>
using namespace std;

int X, Y;

int main(){
	X = 5;
	Y = 10;
	
	//pre-decrement
	cout<<"nilai X sebelum = "<<X<<endl;
	cout<<"nilai --X = "<<--X<<endl;
	cout<<"nilai X sesudah = "<<X<<endl<<endl<<endl;

	//post-increment
	cout<<"nilai Y sebelum = "<<Y<<endl;
	cout<<"nilai Y-- = "<<Y--<<endl;
	cout<<"nilai Y sesudah = "<<Y<<endl;

	system ("pause");
	return 0;
}
