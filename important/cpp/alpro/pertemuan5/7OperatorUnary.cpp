#include <iostream>
using namespace std;

int X;
float Y;

int main(){
	
	X = +8;
	Y = -1.23;
	
	cout<<"X = "<<X<<endl;
	cout<<"Y = "<<Y<<endl<<endl<<endl;
	
	//operator unary -
	X = -X;
	Y = -Y;
	
	cout<<"X = "<<X<<endl;
	cout<<"Y = "<<Y<<endl;
	
	system ("pause");
	return 0;
}
