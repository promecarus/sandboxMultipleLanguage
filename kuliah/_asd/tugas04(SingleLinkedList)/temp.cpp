#include <iostream>

using namespace std;

struct Anggota {
    int id;
    string nama;
    Anggota *next;
};

int main(){
    Anggota *node1, *node2, *node3, *node4;
    
    node1 = new Anggota();
    node2 = new Anggota();
    node3 = new Anggota();
    node4 = new Anggota();

    node1->id = 1234;
    node1->nama = "Muhammad";
    node1->next = node2;

    node2->id = 1235;
    node2->nama = "Haikal";
    node2->next = node3;

    node3->id = 1236;
    node3->nama = "Rasyid";
    node3->next = node4;
    
    node4->id = 1237;
    node4->nama = "Al";
    node4->next = NULL;    

    Anggota *cur = node1;
    while(cur != NULL){
        cout << cur << endl;
        cout << "id\t: " << cur->id << "\t\t" << &cur->id << "\nNama\t: " << cur->nama << " \t" << &cur->nama <<"\n\n";
        cur = cur->next;
    }
	system("pause");
	return 0;
}