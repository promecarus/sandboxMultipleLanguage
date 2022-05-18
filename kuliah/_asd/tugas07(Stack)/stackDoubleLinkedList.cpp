#include <iostream>
using namespace std;

int maksProd = 5;
struct produk {
    string namaProduk;
    int harga;

    produk *next;
    produk *prev;
};

produk *head, *tail, *cur, *nodeBaru, *del;

int countProd() {
    if (head == NULL) {
        return 0;
    } else {
        int jumlah = 0;
        cur = head;
        while (cur != NULL) {
            jumlah++;
            cur = cur->next;
        }
        return jumlah;
    }
}

void pushProd(string namaProduk) {
    if (isFull()) {
        cout << "Stack penuh" << endl;
    } else {
        if (isEmpty()) {
            head = new node();
            tail = head;
        } else {
            node *baru = new node(namaProduk);
            tail->next = baru;
            baru->prev = tail;
            tail = baru;
        }
    }
}

bool isFull() {
    if (countProd() == maksProd) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (countProd() == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    system("pause");
    return 0;
}