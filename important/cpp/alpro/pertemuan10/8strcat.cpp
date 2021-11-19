#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char tanya[15] = "Siapa namamu? ";
	cout << "Pertanyaan: " << tanya << endl;
	char jawab[26] = "Muhammad Haikal Al Rasyid";
	cout << "Jawaban: " << jawab << endl;
	strcat(tanya, jawab);
	cout << "Pertanyaan dan Jawaban: " << tanya << endl;
	
	system("pause");
	return 0;
}
