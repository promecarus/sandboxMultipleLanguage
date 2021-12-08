#include <iostream>
using namespace std;

struct student {
    char name[30];
    char nim[10];
};

student mhs[3];

int main(){
    for (int i =0; i<3; i++){
        cout<<"Masukkan data mahasiswa ke-"<<i+1<<endl;
        cout<<"nama : "; cin>>mhs[i].name;
        cout<<"NIM : "; cin>>mhs[i].nim;
        cout<<endl;
    };

    system ("pause");
    system ("cls");
    
    for (int j=0; j<3; j++){
        cout<<"mahasiswa ke-"<<j+1<<endl;
        cout<<mhs[j].name<<endl;
        cout<<mhs[j].nim<<endl;
        cout<<"----------------------"<<endl<<endl;
    };

    system ("pause");
    return 0;
}