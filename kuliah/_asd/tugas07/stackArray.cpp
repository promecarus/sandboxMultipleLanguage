#include <iostream>
using namespace std;

int maks = 5;
string produk[5];
int top = 0;

bool isFull() {
    if(top == maks) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if(top == 0) {
        return true;
    } else {
        return false;
    }
}

void displayArray() {
    if(isEmpty()) {
        cout << "==========================" << endl;
        cout << "Stack kosong" << endl;
    } else {
        cout << "==========================" << endl;
        for(int i = 0; i < top; i++) {
            cout << produk[i] << endl;
        }
    }
}

void pushArray(string data) {
    if(isFull()) {
        cout << "Stack penuh" << endl;
    } else {
        produk[top] = data;
        top++;
    }
    displayArray();
}

void popArray() {
    if(isEmpty()) {
        cout << "Stack kosong" << endl;
    } else {
        produk[top - 1] = "";
        top--;
    }
    displayArray();
}


void peekArray(int posisi) {
    if(isEmpty()) {
        cout << "Stack kosong" << endl;
    } else {
        int index = top;
        for (int i = 0; i < posisi; i++) {
            index--;
        }
        cout << "Produk ke-" << posisi << " adalah " << produk[index] << endl;
    }
}

void changeArray(int posisi, string data) {
    if(isEmpty()) {
        cout << "Stack kosong" << endl;
    } else {
        int index = top;
        for (int i = 0; i < posisi; i++) {
            index--;
        }
        produk[index] = data;
    }
    displayArray();
}

void destroyArray() {
    for(int i = 0; i < top; i++) {
        produk[i] = "";
    }
    top = 0;
}

int main(){
	pushArray("Mie Goreng");
    pushArray("Nasi Goreng");
    pushArray("Sate");
    changeArray(2, "Sate Ayam");
}