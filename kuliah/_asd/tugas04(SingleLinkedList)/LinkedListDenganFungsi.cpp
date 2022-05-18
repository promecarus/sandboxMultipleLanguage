#include <iostream>

using namespace std;

// deklarasi single linked list
struct Anggota {
    int id;
    string nama;
    Anggota *next;
};

Anggota *head, *tail, *cur, *newNode, *del, *before;

// pembuatan single linked list
void createSingleLinkedList(int id, string nama){
    head = new Anggota();
    head->id = id;
    head->nama = nama;
    head->next = NULL;
    tail = head;
}

// cetak single linked list
void printSingleLinkedList(){
    cur = head;
    while( cur != NULL ){
        cout << cur << endl;
        cout << "Id\t: " << cur->id << "\n";
        cout << "Nama\t: " << cur->nama << "\n\n ";
        cur = cur->next;
    }
}

// tambah di awal single linked list
void addFirst(int id, string nama){
    newNode = new Anggota();
    newNode->id = id;
    newNode->nama = nama;
    newNode->next = head;
    head = newNode;
}

// tambah di akhir single linked list
void addLast(int id, string nama){
    newNode = new Anggota();
    newNode->id = id;
    newNode->nama = nama;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// hapus di awal single linked list
void deleteFirst(){
    del = head;
    head = head->next;
    delete del;
}

// hapus di akhir single linked list
void deleteLast(){
    cur = head;
    while( cur->next != tail ){
        cur = cur->next;
    }
    del = tail;
    tail = cur;
    tail->next = NULL;
    delete del;
}

int main(){
    createSingleLinkedList(1234, "Muhammad");
    printSingleLinkedList();
    
    addFirst(1235, "Rizki");
    printSingleLinkedList();

    addLast(1236, "Belakang");
    printSingleLinkedList();

    system("pause");
    return 0;
}